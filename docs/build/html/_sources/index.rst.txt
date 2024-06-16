authuser (ANSI C library)
--------------------------

**authuser** is lib for checking user.

Developed in `C (programming_language) <https://en.wikipedia.org/wiki/C_(programming_language)>`_ code.

The README is used to introduce the tool and provide instructions on
how to install the tool, any machine dependencies it may have and any
other information that should be provided before the tool is installed.

|github issues| |documentation status| |github contributors|

.. |github issues| image:: https://img.shields.io/github/issues/vroncevic/authuser.svg
   :target: https://github.com/vroncevic/authuser/issues

.. |github contributors| image:: https://img.shields.io/github/contributors/vroncevic/authuser.svg
   :target: https://github.com/vroncevic/authuser/graphs/contributors

.. |documentation status| image:: https://readthedocs.org/projects/authuser/badge/?version=latest
   :target: https://authuser.readthedocs.io/en/latest/?badge=latest

.. toctree::
   :maxdepth: 4
   :caption: Contents

   self

Installation
-------------

Navigate to release `page`_ download and extract release archive.

.. _page: https://github.com/vroncevic/authuser/releases

To install **authuser** type the following

.. code-block:: bash

    tar xvzf authuser-x.y.z.tar.gz
    cd authuser-x.y.z/
    ./autogen.sh
    make
    sudo make install

Dependencies
-------------

**authuser** requires next modules and libraries

* `libc - www.gnu.org <https://www.gnu.org/software/libc/>`_
* `libpam/libpam_misc <https://github.com/linux-pam/linux-pam>`_

Tool structure
---------------

**authuser** is based on POP.

Tool structure

.. code-block:: bash

    authuser/
        ├── AUTHORS
        ├── autogen.sh
        ├── ChangeLog
        ├── configure.ac
        ├── COPYING
        ├── Makefile.am
        ├── NEWS
        ├── po/
        │   ├── ChangeLog
        │   ├── LINGUAS
        │   ├── POTFILES
        │   └── POTFILES.in
        ├── README
        └── src/
            ├── authuser-0.1.pc
            ├── authuser-0.1.pc.in
            ├── authuser.h
            ├── lib.c
            └── Makefile.am
    
    3 directories, 17 files

Copyright and licence
-----------------------

|license: gpl v3|

.. |license: gpl v3| image:: https://img.shields.io/badge/license-gplv3-blue.svg
   :target: https://www.gnu.org/licenses/gpl-3.0


Copyright (C) 2016 - 2024 by `vroncevic.github.io/authuser <https://vroncevic.github.io/authuser>`_

**authuser** is free software; you can redistribute it and/or modify
it under the same terms as GPLv3.

Lets help and support FSF.

|Free Software Foundation|

.. |Free Software Foundation| image:: https://raw.githubusercontent.com/vroncevic/apmodule/dev/docs/fsf-logo_1.png
   :target: https://my.fsf.org/

|Donate|

.. |Donate| image:: https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif
   :target: https://my.fsf.org/donate/

Indices and tables
------------------

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`
