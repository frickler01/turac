Comments
========

Roughly describe for each function *what* it does. If you feel that a design choice of an implementation detail is not directly obvious, clarify briefly. Comments in separate lines before commented code.

Naming
======
Since C is awfully untyped, in addition to always using telling variable and function names, use [Apps Hungarian] (http://en.wikipedia.org/wiki/Hungarian_notation) where [appropriate] (http://www.joelonsoftware.com/articles/Wrong.html).

Indentation
===========
Use [Allman style] (http://en.wikipedia.org/wiki/Indent_style#Allman_style).

Returns
=======
Do not return void, return at least 0 by default.
