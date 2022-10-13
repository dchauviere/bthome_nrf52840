# BTHome with Generic NRF52840 Template project

## Prerequesites

* NRF52 SDK
* nrfutil
* GNU ARM Toolchain
* BlackMagic Probe

## Secure bootloader

TODO: howto build secure bootloader

## Build

```shell
export GNU_INSTALL_ROOT=/opt/gcc-arm-none-eabi/bin/
export SDK_ROOT=/opt/nRF5_SDK_17.1.0_ddde560
make
make firmware.hex
make flash
```