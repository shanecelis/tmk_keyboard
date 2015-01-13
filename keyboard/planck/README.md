Planck keyboard firmware
========================

DIY compact keyboard designed and run by
[OrtholinearKeyboards](http://ortholinearkeyboards.com).  This
firmware is based off of the gh60 codebase with the suggestions given
by
[matt3o](http://deskthority.net/workshop-f7/how-to-build-your-very-own-keyboard-firmware-t7177.html)
from deskthority.

## Planck Resources
- [Planck page](http://planckkeyboard.com)

## Build
Move to this directory then just run `make` like:

    $ make

Use `make -f Makefile.pjrc` if you want to use PJRC stack but I find no reason to do so now.


## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[classic|shane|<name>]

### 1 "Classic"

[keymap_classic.c](keymap_classic.c) implements the following layout.

[![keyboard layout](https://github.com/pcarrier/planck/raw/master/img/layouts/classic.png)](http://www.keyboard-layout-editor.com/#/layouts/46aa7b0762cb7a535eaaf1e49644398f)

### 2 Shane's

[keymap_shane.c](keymap_shane.c) implements the following layout. It
also uses the space bar to swap both sides of the keymap, such that
'a' becomes 'j' and 's' becomes 'k' and 'd' becomes 'l' and so on.  It
does this across all layers.

[![keyboard layout](http://i.imgur.com/Wjzm9pI.png)](http://www.keyboard-layout-editor.com/#/layouts/015d9011102619d7695c86ffe57cf441)

### 3 Jack's (NYI)

[![keyboard layout](https://github.com/pcarrier/planck/raw/master/img/layouts/jack.png)](http://www.keyboard-layout-editor.com/#/layouts/313d2d43c1b86c7d223aa7ced2a67102)

### 4 "Ergolemak" (NYI)

[![keyboard layout](https://github.com/pcarrier/planck/raw/master/img/layouts/ergolemak.png)](http://www.keyboard-layout-editor.com/#/layouts/6404f1346108887c37f781da0dc0e6c7)

### 1 Classic
