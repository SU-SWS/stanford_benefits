# [Stanford Benefits](https://github.com/SU-SWS/stanford_benefits)
##### Version: 7.x-1.x

Maintainers: [minorwm](https://github.com/minorwm)

Changelog: [CHANGELOG.md](CHANGELOG.md)

Description
---

The Stanford Benefits module is used to compare different employee benefits side by side and maintain the different
in the Medical Benefits and Dental Benefits content types.

Installation Playbook
---

The Stanford Benefits module is has some custom settings that need to be applied for the it to work correctly. Here 
are the steps needed to get the module configured for production.

1)

Troubleshooting
---

If you are experiencing issues with this module try reverting the configuration files. If you are still experiencing 
issues try posting an issue on the GitHub issues page.

Developer
---

If you wish to develop on this module you will most likely need to compile some new css. Please use the sass structure
provided and compile with the sass compiler packaged in this module. To install:

```
npm install
grunt watch
 or
grunt devmode
```

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a
fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a 
pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)
