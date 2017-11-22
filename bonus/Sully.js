var fs = require('fs');
var util = require('util');
const { exec } = require('child_process');
var path = require('path');
var i = 5;
const f = function () {
	if (i <= 0)
		return;
	if (path.basename(__filename).length !== 8)
		i--;
	var tmp = util.format('Sully_%d.js', i);
	var txt = util.format("var fs = require('fs');\nvar util = require('util');\nconst { exec } = require('child_process');\nvar path = require('path');\nvar i = %d;\nconst f = ", i)
	fs.writeFile(tmp, txt + f.toString() + "\nf();\n", function (err) {})
	exec('node '+ tmp);
}
f();
