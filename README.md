Views Bootstrap
---------------------

This module enables you to create components following the theme structure of the Bootstrap 3.x framework all within the configuration settings of the powerful Views module.

CONTENTS OF THIS FILE
---------------------

 - Introduction
 - Tested
 - Known Issues
 - Special Thanks
 - Requirements
 - Installation
 - Coming From Drupal?
 - Usage
 - License
 - Credits
 - Maintainers

TESTED
-----

Some functionality working -- see chart at bottom.  Initially ported, this module did not work at all, so we radically simplified the code structure until it was working.  We intend to alter the code back close to its original structure little by little as long it will work within the new architecture of Backdrop CMS.  This is probably an alpha/beta release you might not want in production yet, but we are working on it currently.

KNOWN ISSUES
---------------------

Some functionality working -- see chart at bottom.

SPECIAL THANKS
--------------

Sponsored by WikiJob <https://www.drupal.org/wikijob>

REQUIREMENTS
------------

Views module enabled.  Having a Bootstrap 3.x based theme helps, but there is a module setting for that in this version of the module.

INSTALLATION
------------

Install this module using the official Backdrop CMS instructions at https://backdropcms.org/guide/modules

COMING FROM DRUPAL?
-------------------

Nothing very much different in UI -- only code structure changes (plugins).

PERMISSIONS
------------

none

USAGE
-----

Setup your options in the Views module.  Where you would once choose "List, Table"...now you can also choose "Bootstrap Carousel, Boostrap Grid" etc...

LICENSE
-------

This project is GPL v2 software. See the LICENSE.txt file in this directory for complete text.

CREDITS
-----------

Initial development by Dmitry Demenchuk <http://www.demenchuk.me/>

MAINTAINERS
-----------

- seeking

Ported to Backdrop by:

- biolithic <https://github.com/biolithic>

DOES IT WORK?
-----------

This module provides some format options for your Backdrop Views based on what you might see at http://getbootstrap.com/components .
2/23/16 Here is a list so far of what the output of each option is:
Can we fix them all?  Maybe, this is just the progress so far.

ACCORDION
content - full content = nothing
content - teaser = nothing
content - full content force using fields = nothing
- fields - select content title - disable link this field to the original piece of content = accordion

CAROUSEL
carousel - full content = nothing
- carousel - force using fields = image rotator
thumbnail = dual image rotator
- content - full content = content rotator (needs styling)
content - teaser = teaser rotator
content - full content force using fields = page showing the first node
- fields - select content title - disable link this field to the original piece of content = list of fields rotator

GRID
thumbnail = nothing
thumbnail - force using fields = mis-aligned card type setup
- content - full content = responsive grid like traditional Bootstrap http://getbootstrap.com/css/#grid
content - teaser = responsive grid without images (more grid like)
content - full content force using fields = unpredictable grid
- fields - fields = responsive grid (looks different depending on your fields)

LIST GROUP
thumbnail = looks like accordion with no text and direct links to the home page
- thumbnail - force using fields = boxed nodes...traditional table style?
content - full content = it's something?
content - teaser = it's something?
content - full content force using fields = it's something?
- fields - select content title - disable link this field to the original piece of content = it's something?

MEDIA OBJECT
thumbnail = nothing
- thumbnail - force using fields = looks like Twitter layout using thumbnails
content - full content = nothing
content - teaser = nothing
content - full content force using fields = nothing
- fields = looks like Twitter layout using thumbnails

TAB
thumbnail = nothing
thumbnail - force using fields = nothing
content - full content = working tabs missing tab title text
content - teaser = nothing
- content - full content force using fields = nice tabs or pills or lists
- fields = nice tabs or pills or lists

TABLE
thumbnail = nothing
- thumbnail - force using fields = it's a horizontal scrolling table with small text?
content - full content = nothing
content - teaser = nothing
- content - full content force using fields = it's a horizontal scrolling table with small text?
- fields - it's a horizontal scrolling table with small text?

THUMBNAILS
thumbnail = nothing
thumbnail - force using fields = it's something?
- content - full content = boxes/cards of content like Pinterest
- content - teaser = boxes/cards of content like Pinterest
- content - full content force using fields = boxes/cards of content like Pinterest
- fields - boxes/cards of content like Pinterest
