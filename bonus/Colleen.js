/*commentaire*/
var func = function () { return "/*commentaire2*/mafunction" }
var f = function () { return "/*commentaire*/\nvar func = " + func.toString() + "\nvar f = " + f.toString() + "\nconsole.log(f());" }
console.log(f());
