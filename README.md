cc-template
===========

*cc-template* is designed to make starting an
[@alistairking](https://github.com/alistairking) style C project fast and
painless.

This template is the result of refinement across several large C projects that I
have worked on, and contains all scripts needed for a complete autotools-managed
build system, as well as a pre-installed copy of
[cc-common](https://github.com/CAIDA/cc-common).

Usage
-----

To get started using this template, simply clone a copy:
~~~
git clone https://github.com/alistairking/cc-template.git <project-name>
~~~

And then set about replacing the place-holder code and text with text specific to
your project.

A good start would be to replace all occurrences of the string `@@PROJECT_NAME`
with the name of your project. These place-holders are *only* in the copyright
preamble at the top of each file.

Next, you can start replacing all references to "hello" (the name of the toy
library in the example) with appropriate names for your project. You **may** be
able to do this with a bulk find/replace, but be careful. I suggest you instead
start from [configure.ac](configure.ac), adding libraries needed, and tweaking
configuration options as you go. Once reaching the bottom of `configure.ac`,
there are a list of Makefiles that configure will generate, continue the
customization by going to the corresponding `Makefile.am` for each and making
changes.

In the `configure.ac` and `Makefile.am` scripts, I have used the following
format to add notes to cc-template users:
~~~
## @@ <note>
~~~
Feel free to remove all of these lines once customization is complete.

Once the autotools scripts have been customized, you can set to work on the
actual code files. If you feel comfortable, then simply blow away all `.c` and
`.h` files, and create your own, however, I prefer to duplicate and adapt the
boilerplate code that is contained in the project.

Compilation
-----------

Once customization and some coding is complete (or before, `cc-template` is a
fully-working example!), you can run the build scripts.

Chances are, you can simply run the [build_latest.sh](build_latest.sh) script
and this will do everything you need, including building a distribution tarball.

If however, you have some unusual configuration, or you just want to do things
manually, the following are the steps i usually take:

1. Run `autoreconf`
  - You may need to run `autoreconf -vfi` the very first time
2. Run `./configure`
3. Run `make`

If you have built the example project as-is, there will be a sample program in
[tools](tools):
~~~
alistair@gibi:~/dev/cc-template$ tools/hello-world
ERROR: a name must be given
usage: /Users/alistair/dev/cc-template/tools/.libs/hello-world [-c count] name
       -c <count>    the number of times to repeat (default: 1)
alistair@gibi:~/dev/cc-template$ tools/hello-world Alistair
Hello Alistair, nice to meet you!
alistair@gibi:~/dev/cc-template$ tools/hello-world -c 3 Alistair
Hello Alistair, nice to meet you!
Hello Alistair, nice to meet you!
Hello Alistair, nice to meet you!
~~~

Please contact [@alistairking](https://github.com/alistairking) with any
questions or insults.

Enjoy!
