Views Bootstrap
---------------------

You want to make lists of content/images that look like responsive Bootstrap grids, carousels, tabs of content, and the like.  This group of Views module styles will do that.

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

The following components of this module have been tested to have a working Views configuration:
- Accordion
- Carousel
- Grid
- Media Object
- Tab
- Table
- Thumbnails

There are a lot of configurations that do not work due to incompatibility.  For example, making an accordion of one field does not work. (these require a click-able title and hidden body content).  Making a table of one content teaser not work (tables consist of fields in rows).

KNOWN ISSUES
---------------------

Some functionality not working -- see chart at bottom.

Knowledge of how to use different Views formats is required.  You may have to write CSS or Javascript to make it look just like you want it to.

Javascript is required for some and accessibility is not guaranteed and Internet Explorer 8/9/older browser support is not supported for all components.

To become familiar with what this module provides:

<http://getbootstrap.com/javascript/#carousel>  <http://getbootstrap.com/components>

This does not require a Bootstrap based theme if you configure this module's settings correctly.

If you do not use a Boostrap based theme, this module loads in Bootstrap 3.3.6 Javascript and CSS from an external CDN.

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

Nothing very much different in UI -- but the code structure has changed significantly due to differences in Backdrop CMS plugin API.

PERMISSIONS
------------

none

USAGE
-----

Setup your options in the Views module.  Where you would once choose "List, Table"...now you can also choose "Bootstrap Carousel, Boostrap Grid" etc...

"What is the difference between using a Bootstrap based theme for your website and using this module?"

Let's take the use-case of making a "Pinterest-style", responsive card style listing of content on your front page.  On large screens, you want it to be 4 columns wide with a sidebar on the right side.  On smaller screens, it should be 2 columns wide with a sidebar on the right side.  On a small screen, it should be 1 column wide with the sidebar underneath.  Using something like Bartik theme, you can install this module, select it, and it will happen, but the rest of the page will look like Bartik (or your theme).  If you were using something like Radix theme, the theme would look like Bootstrap but you would have to manually add the grid classes to your "cards" in your theme files to make the same effect.

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

This module provides some format options for your Backdrop Views based on what you might see at <http://getbootstrap.com/components> .
2/29/16 Here is a list so far of what the output of each option is:
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
