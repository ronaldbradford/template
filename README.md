Template
========

Base template for HTML5/Bootstrap/JQuery web app using PHP includes for removing code duplication.

All modules are included so this can run locally without network access.

The base template includes 3 primary PHP include files.

* header.inc - includes the standard code for the <head> tag. 
* nav.inc - includes code for the primary top menu navigation
* footer.inc - includes code for the standard footer (e.g. copyright, Google Analytics, JQuery etc.

The index.htm template shows the correct location for including these files, along with the necessary 
predefined PHP variables to provide customization. Additional <head> information, and  scripts for
use in <body> can be included appropriately.

* $title - The content for <title>
* $nav - The navigation button for this page, so this is highlight as the active navigation  option
* $path - The base path of the include files, enables these files to be used in any subdirectories

For Example:

  $title='Template Page';
  $nav='home';
  $path='./';

