# [Stanford Benefits](https://github.com/SU-SWS/stanford_benefits)
##### Version: 7.x-1.0-alpha3

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

- ```drush @anc.cardinalatwork-up en stanford_benefits -y```
- Go to: ```admin/structure/taxonomy_manager/voc/benefit_plan_type```
- Add these terms: 
```Medical Plans
   -Active employees
   --Kaiser Permanente HMO (California)
   --Stanford Health Care Alliance
   --EPO Plan
   --Healthcare + Savings Plan
   --ACA Basic High Deductible Health Plan
   -Early retirees under 65
   --Kaiser Permanente HMO (California)
   --Stanford Health Care Alliance
   --Healthcare + Savings Plan
   --EPO Plan
   -Retirees
   --MEDICARE ADVANTAGE PLANS
   ---Kaiser Permanente Senior Advantage
   ---Health Net Seniority Plus
   --MEDICARE SUPPLEMENT PLANS
   ---Blue Shield Retiree PPO
   ---Health Net Medicare COB
   Dental Plans
   -Active employees
   --Delta Dental Basic PPO Plan
   --Delta Dental Enhanced PPO Plan
   -Retirees
   --Delta Dental PPO Plan
   ```
- Move the Medical Plans up above the Dental Plans in the Taxonomy Manager by using the up arrow button on hover.
- Make sure the context path is pointing to ```benefits-rewards/health/medical-life/medical-plans/comparison-tool-new``` page.
- Set the view block title to ```<none>```
- Flush all caches
- Edit the menu settings for the page and create the proper menu links if needed.
- Edit the different exposed filters here: ```admin/structure/views/view/caw_benefit_comparison_tool/edit/caw_benefit_comparison_tool_block```
  - Make sure that the correct terms are selected for each vocabulary filter.
- Import Medical/Dental Benefits from dev for 2019/2020.

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
