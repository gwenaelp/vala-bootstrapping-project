vala-bootstrapping-project
==========================

A simple vala (with Gtk+folks) project, built with autotools+libtool, for bootstrapping projects. still a bit messy, but it works decently.

Prerequisites
=============

- Ack (package ack-grep on debian-based distros)

Howto
=====

- Adapt renameProject.sh with the names that suit your needs
- Go into the project dir, and run ../renameProject.sh
- Run autoreconf -fi
- You're done!

About
=====

This is a project base I done while experimenting with Vala language. It's made from the really nifty Plank software, from the Docky team (thanks to them! =D)

More info about Plank/Docky here : https://launchpad.net/~ricotz/+archive/docky

Todo
====

- Tests are not supported in this version. (hopefully, it will be ok soon)
