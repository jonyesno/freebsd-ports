Miscellaneous FreeBSD ports

* zomo/cronwrap : https://github.com/jonyesno/cronwrap
* zomo/lockrun : http://unixwiz.net/tools/lockrun.html
* zomo/munin-graphite : https://github.com/adamhjk/munin-graphite
* zomo/tdu : https://github.com/dse/tdu

Add to `/etc/make.conf` (or `/usr/local/etc/poudriere.d/*-make.conf`)
```
VALID_CATEGORIES+=zomo
```
