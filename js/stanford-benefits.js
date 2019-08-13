(function ($) {
  /**
   * Drupal attach behaviour.
   */
  Drupal.behaviors.stanford_benefits = {
    attach: function (context, settings) {
      $(document).ready(function( settings) {
        // Setup the variables we will use here.
        var CompTool = '.view-caw-benefit-comparison-tool';
        var SubmitButton = '#edit-submit-caw-benefit-comparison-tool';
        var MedicalActive = '#edit-term-medical-active-benefit-wrapper';
        var MedicalPreretirees = '#edit-term-medical-preretirees-benefit-wrapper';
        var MedicalRetirees = '#edit-term-medical-retirees-benefit-wrapper';
        var DentalActive = '#edit-term-dental-active-benefit-wrapper';
        var DentalRetirees = '#edit-term-dental-retirees-benefit-wrapper';

        // We need to make sure all the results look good in each row.
        EqualHeightResults();
        // We need to move some things around for UI beauty.
        MoveViewHTMLElements();

        // Hide all the different exposed filters.
        // If nothing has been checked, reset the state of the form.

        //alert(AnyChecked());
        var anychecked = AnyChecked();
        if (anychecked == null) {
          HideAll();
        }
        else {
          if (IsChecked('term_medical_active_benefit')) {
            ShowSection(MedicalActive);
          }
          if (IsChecked('term_medical_preretirees_benefit')) {
            ShowSection(MedicalPreretirees);
          }
          if (IsChecked('term_medical_retirees_benefit')) {
            ShowSection(MedicalRetirees);
          }
          if (IsChecked('term_dental_active_benefit')) {
            ShowSection(DentalActive);
          }
          if (IsChecked('term_dental_retirees_benefit')) {
            ShowSection(DentalRetirees);
          }
        }
        // Show the Medical/Active exposed filters
        $(MedicalActive + ' label:first-child', context).click(function() {
          ShowSection(MedicalActive);
          var checkboxname = GetCheckboxName(MedicalActive);
          ClearOtherBoxes(checkboxname);
        });

        // Show the Medical/Pre-retirees exposed filters
        $(MedicalPreretirees + ' label:first-child', context).click(function() {
          ShowSection(MedicalPreretirees);
          var checkboxname = GetCheckboxName(MedicalPreretirees);
          ClearOtherBoxes(checkboxname);
        });

        // Show the Medical/Retirees exposed filters
        $(MedicalRetirees + ' label:first-child', context).click(function() {
          ShowSection(MedicalRetirees);
          var checkboxname = GetCheckboxName(MedicalRetirees);
          ClearOtherBoxes(checkboxname);
        });

        // Show the Dental/Active exposed filters
        $(DentalActive + ' label:first-child', context).click(function() {
          ShowSection(DentalActive);
          var checkboxname = GetCheckboxName(DentalActive);
          ClearOtherBoxes(checkboxname);
        });

        // Show the Dental/Retirees exposed filters
        $(DentalRetirees + ' label:first-child', context).click(function() {
          ShowSection(DentalRetirees);
          var checkboxname = GetCheckboxName(DentalRetirees);
          ClearOtherBoxes(checkboxname);
        });

        // Function to set all fields in a row to the same height.
        function EqualHeightResults() {
          var fields = [];

          $('article .fieldset-wrapper > div').each(function(i, obj) {
            fields.push(i, $(this).attr('class'));
          });

          var classes = fields.filter(function(elem, index, self) {
            return index === self.indexOf(elem);
          });

          $.each(classes , function(index, val) {
            if (val.length > 1) {
              var start_pos = val.indexOf(' ') + 1;
              var end_pos = val.indexOf(' ',start_pos);
              var classname = val.substring(start_pos,end_pos);
              if (classname.length > 1) {
                equalHeightByContainer('.' + classname);
              }
            }
          });

          // Fix field groups to be the same height to fix weirdness.
          equalHeightByContainer('.fieldset-description');
          equalHeightByContainer('.field-name-field-overall-accredition-status .field-label');
          equalHeightByContainer('.group-basics span.fieldset-legend');
          equalHeightByContainer('.group-maternity span.fieldset-legend');
          equalHeightByContainer('.group-mental-health span.fieldset-legend');
          equalHeightByContainer('.group-other-serv-a-d span.fieldset-legend');
          equalHeightByContainer('.group-other-serv-a-e span.fieldset-legend');
          equalHeightByContainer('.group-other-serv-e-n span.fieldset-legend');
          equalHeightByContainer('.group-other-serv-f-o span.fieldset-legend');
          equalHeightByContainer('.group-other-serv-o-z span.fieldset-legend');
          equalHeightByContainer('.group-other-serv-p-z span.fieldset-legend');
          equalHeightByContainer('.group-preventive-care span.fieldset-legend');
          equalHeightByContainer('.group-orthodontic-services span.fieldset-legend');
        }

        // Function to get the name of the checkbox from id.
        function GetCheckboxName(term) {
          var re = /\-/gi;
          var tmp = term.replace('#edit-', '');
          var underscoreme = tmp.replace('-wrapper', '');
          var underscores = underscoreme.replace(re, '_');
          return underscores;
        }

        // Function to tell if anything is check on the exposed fields.
        function IsChecked(term) {
          return $('input[name="' + term + '[]"]:checked').length;
        }

        // Function to tell if anything is check on the exposed fields.
        function UncheckBoxes(name) {
          $('input[name="' + name + '[]"]:checked').prop('checked', false);
        }

        // Function to uncheck all checkboxes other than the section passed.
        function ClearOtherBoxes(section) {
          var medicalactive = GetCheckboxName(MedicalActive);
          var medicalpreretirees = GetCheckboxName(MedicalPreretirees);
          var medicalretirees = GetCheckboxName(MedicalRetirees);
          var dentalactive = GetCheckboxName(DentalActive);
          var dentalretirees = GetCheckboxName(DentalRetirees);

          // Whatever section we are on, we clear the other sections checkboxes.
          if ( section == medicalactive) {
            UncheckBoxes(medicalpreretirees);
            UncheckBoxes(medicalretirees);
            UncheckBoxes(dentalactive);
            UncheckBoxes(dentalretirees);
          }
          if ( section == medicalpreretirees) {
            UncheckBoxes(medicalactive);
            UncheckBoxes(medicalretirees);
            UncheckBoxes(dentalactive);
            UncheckBoxes(dentalretirees);
          }
          if ( section == medicalretirees) {
            UncheckBoxes(medicalactive);
            UncheckBoxes(medicalpreretirees);
            UncheckBoxes(dentalactive);
            UncheckBoxes(dentalretirees);
          }
          if ( section == dentalactive) {
            UncheckBoxes(medicalactive);
            UncheckBoxes(medicalpreretirees);
            UncheckBoxes(medicalretirees);
            UncheckBoxes(dentalretirees);
          }
          if ( section == dentalretirees) {
            UncheckBoxes(medicalactive);
            UncheckBoxes(medicalpreretirees);
            UncheckBoxes(medicalretirees);
            UncheckBoxes(dentalactive);
          }
        }

        // Function to move some things around for UI beauty.
        function MoveViewHTMLElements() {
          $(MedicalActive).before( $("#medical-plan-header") );
          $(DentalActive).before( $("#dental-plan-header") );
          $('.view-header' + ' > p', context).remove();
          $(CompTool + ' .view-header').before( $(CompTool + ' .view-header' + ' h2.plan-rates-title') );
          $(MedicalActive + ' .views-widget', context).before( $(MedicalActive + ' .description') );
          $(MedicalPreretirees + ' .views-widget', context).before( $(MedicalPreretirees + ' .description') );
          $(MedicalRetirees + ' .views-widget', context).before( $(MedicalRetirees + ' .description') );
          $(DentalActive + ' .views-widget', context).before( $(DentalActive + ' .description') );
          $(DentalRetirees + ' .views-widget', context).before( $(DentalRetirees + ' .description') );
        }

        // Function to hide all the different exposed filters.
        function HideAll() {
          $(MedicalActive + ' .description', context).css('display', 'none');
          $(MedicalActive + ' .views-widget', context).css('display', 'none');

          $(MedicalPreretirees + ' .description', context).css('display', 'none');
          $(MedicalPreretirees + ' .views-widget', context).css('display', 'none');

          $(MedicalRetirees + ' .description', context).css('display', 'none');
          $(MedicalRetirees + ' .views-widget', context).css('display', 'none');

          $(DentalActive + ' .description', context).css('display', 'none');
          $(DentalActive + ' .views-widget', context).css('display', 'none');

          $(DentalRetirees + ' .description', context).css('display', 'none');
          $(DentalRetirees + ' .views-widget', context).css('display', 'none');

          $(CompTool + ' .view-empty').css('display', 'none');

          $(SubmitButton, context).css('display', 'none');
        }

        // Function to show the right section when clicked.
        function ShowSection(section) {
          $(section + ' .description', context).css('display', 'block');
          $(section + ' .views-widget', context).css('display', 'block');
          $(CompTool + ' .view-empty').css('display', 'block');
          $(SubmitButton, context).css('display', 'block');

          if ( section !== MedicalActive) {
            $(MedicalActive + ' .description', context).css('display', 'none');
            $(MedicalActive + ' .views-widget', context).css('display', 'none');
          }
          if ( section !== MedicalPreretirees) {
            $(MedicalPreretirees + ' .description', context).css('display', 'none');
            $(MedicalPreretirees + ' .views-widget', context).css('display', 'none');
          }
          if ( section !== MedicalRetirees) {
            $(MedicalRetirees + ' .description', context).css('display', 'none');
            $(MedicalRetirees + ' .views-widget', context).css('display', 'none');
          }
          if ( section !== DentalActive) {
            $(DentalActive + ' .description', context).css('display', 'none');
            $(DentalActive + ' .views-widget', context).css('display', 'none');
          }
          if ( section !== DentalRetirees) {
            $(DentalRetirees + ' .description', context).css('display', 'none');
            $(DentalRetirees + ' .views-widget', context).css('display', 'none');
          }
        }

        // Are there any checkboxes selected.
        function AnyChecked() {
          // If no checkboxes are selected, false else true.
          if (IsChecked('term_medical_active_benefit')) {
            return IsChecked('term_medical_active_benefit');
          }
          if (IsChecked('term_medical_preretirees_benefit')) {
            return IsChecked('term_medical_preretirees_benefit');
          }
          if (IsChecked('term_medical_retirees_benefit')) {
            return IsChecked('term_medical_retirees_benefit');
          }
          if (IsChecked('term_dental_active_benefit')) {
            return IsChecked('term_dental_active_benefit');
          }
        }

        // Function to show and hide the right section for the views exposed filters.
        function ShowFormFor(section) {
          $('#' + section + ' .description', context).css('display', 'block');
          $('#' + section + ' .views-widget', context).css('display', 'block');

          if ( section !== MedicalActive) {
            $(MedicalActive + ' .description', context).css('display', 'none');
            $(MedicalActive + ' .views-widget', context).css('display', 'none');
          }
          if ( section !== MedicalPreretirees) {
            $(MedicalPreretirees + ' .description', context).css('display', 'none');
            $(MedicalPreretirees + ' .views-widget', context).css('display', 'none');
          }
          if ( section !== MedicalRetirees) {
            $(MedicalRetirees + ' .description', context).css('display', 'none');
            $(MedicalRetirees + ' .views-widget', context).css('display', 'none');
          }
          if ( section !== DentalActive) {
            $(DentalActive + ' .description', context).css('display', 'none');
            $(DentalActive + ' .views-widget', context).css('display', 'none');
          }
          if ( section !== DentalRetirees) {
            $(DentalRetirees + ' .description', context).css('display', 'none');
            $(DentalRetirees + ' .views-widget', context).css('display', 'none');
          }
        }
      });
    }
  };
})(jQuery);
