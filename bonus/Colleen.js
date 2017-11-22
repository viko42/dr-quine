/*
	commentaire
*/
var func = function () { return "/*\n\tcommentaire2\n*/\n" }
var f = function () { return "/*\n\tcommentaire\n*/\nvar func = " + func.toString() + "\nvar f = " + f.toString() + "\nconsole.log(f());" }
console.log(f());
