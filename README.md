<h1>_PRINTF</h1>
Section: 3
	
Date: July of 2022.

<h2>NAME:</h2> 
_printf - formatted output conversion

<h2> Synopsis </h2>
  #include "main.h"
	
 <i> int _printf(const char *format, ...);</i>

<h2> Description </h2>
This function displays on screen a string using argument given by the operator

<h3>Return value</h3>
In case of succes this function return the number of printed characters (null character is not included), otherwise returns -1.

<h2> Program flowchard</h2>

```mermaid
graph TD;

    s((Start))-->i[/imput: const char *format, .../];

    i[/imput: const char *format, .../]-->f1{is format != '\0' ?};

    f1{is format != '\0' ?}-->|no|r1((end, return -1));
    f1{is format != '\0' ?}-->|yes|fl(for loop);

    fl(for loop)-->if{"is format [i] = '%'"};

    if{"is format [i] = '%'"}-->|yes|if2{"is format[i + 1] = '\0'"};
    if{"is format [i] = '%'"}-->|no|p1("print format[i]");

    if2{"is format[i + 1] = '\0'"}-->|yes|r2((end, return -1));
    if2{"is format[i + 1] = '\0'"}-->|no|f2(for loop);
    f2(for loop)-->if3{"is format[i + 1] = especific char"};

    if3{"is format[i + 1] = especific char"}-->|no|pr["print %, print format[i + 1]"];
    if3{"is format[i + 1] = especific char"}-->|yes|call[call corresponding function];
    call[call corresponding function]-->end[print arguments];

```

<h2> Format </h2>
The format string is a constant character string. It is composed of ordinary characters and conversion specifications ('s', 'c', 'd', 'i' and 'b').
Conversion specifications are introduced by a '%' (for example %s if you want to give a string as argument).

<h3> Conversion specifiers </h3>
-c       <p>The function expect to receieve a char as argument, the character received will be printed instead of "%c".</p>
-s				<p>In this case is expected to recieve a pointer to a string, the null character of that string is not printed.</p>
-d,i			<p>int argument are expected.</p>
-%				<p>This conversion specifiers does not expect any argument, it is used to print a %.</p>
-b				<p>This specifier is used to convert an unsigned int to binary, so is necessary to give an unsigned int as argument. </p>

<h3> Examples </h3>

1- Printing a char
<pre><code>int main(void)
{
	_printf("%c\n", "H");
	return(0);
}</code></pre>
	
	Output: H
	
2- Printing a string
<pre><code>int main(void)
{
	string = "World";
	_printf("%s-%s\n", "Hello", string);
	return(0);
}</code></pre>

	Output: Hello-World

3- Printing an int
<pre><code>int main(void)
{
	int i = 128;
	_printf("%d-%d\n", 29, i);
	return(0);
}</code></pre>

	Output: 29-128


4- Printing %
<pre><code>int main(void)
{
	int i = 35;
	_printf("There is a %i %% chance of rain\n", i);
	return(0);
}</code></pre>

	Output: There is a 35 % chance of rain

5- Converting a int to binary
<pre><code>int main(void)
{
	int i = 777;
	_printf("The number %i in binary notation is: %b", i, i);
	return(0);
}</code></pre>

	Output: The number 777 in binary notation is 1100001001
	
	
<h2>Authors</h2>
Juan Rey

Ignacio Martino


