var fs = require('fs');
/*
	commentaire
*/
const f = function () { fs.writeFile("./Grace_kid.js", "var fs = require('fs');\n/*\n\tcommentaire\n*/\nconst f = " + f.toString() + "\nf();\n", function (err) {if (err) console.log(err);}) }
f();
