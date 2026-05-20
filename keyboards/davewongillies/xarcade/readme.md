# xarcade

A 5-key macropad with its switch pins wired directly to microcontroller IO pins.

* Keyboard Maintainer: [davewongillies](http://github.com/davewongillies),
  [The QMK Community](https://github.com/qmk)
* Hardware Supported: Pro Micro

## Default keymap

This macropad is mapped with hotkeys intended for use with the [MiSTer](https://mister-devel.github.io/MkDocs_MiSTer/basics/hotkey/):

| Pin | Default mapping             |
|-----|-----------------------------|
| B4  | OSD Menu                    |
| E6  | Raw Screenshot              |
| D7  | Reboot                      |
| C6  | Save State (slot 1)         |
| D4  | Restore Save State (slot 1) |

## Build and Flash

Make example for this macropad (after setting up your build environment):

```bash
make davewongillies/xarcade:vial:dfu
```

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools)
and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for
more information. Brand new to QMK? Start with our
[Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
