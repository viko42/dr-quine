var fs = require('fs');
const f = function () { fs.writeFile("./Grace_kid.js", "var fs = require('fs');\nconst f = " + f.toString() + "\nf();", function (err) {if (err) console.log(err);}) }
f();
