Automatic Alternative Text

CONTENTS OF THIS FILE
---------------------
   
 * Introduction
 * Installation
 * Configuration
 * Maintainers

INTRODUCTION
------------

The module uses the Microsoft Azure Cognitive Services API to generate an 
Alternative Text for images when no Alternative Text has been provided by user.


INSTALLATION
------------
 
 * Install as you would normally install a contributed Drupal module. Visit:
   https://drupal.org/documentation/install/modules-themes/modules-8
   for further information.

 * You may want to disable Toolbar module, since its output clashes with
   Administration Menu.


CONFIGURATION
-------------

After install go to /admin/config/media/auto_alter to configure the module.
You need to create an account at: https://www.microsoft.com/cognitive-services

On Microsoft Azure:
After creating an acoount login
Register a new Resource "Computer Translation API"
After that you can access your API keys.
 Copy "Key 1" to the "API Key" field of your Drupal configuration
Click on "Api Reference" link
  Select "get" function
  Copy "Request URL" to the "URL of Endpoint" field of your Drupal configuration

Last step, decide whether or not users should see a status message when saving 
content.


MAINTAINERS
-----------

Current maintainers:
 * Ullrich Neiss (slowflyer) - https://drupal.org/user/850168

This project has been sponsored by:
 * crowd-creation GmbH
