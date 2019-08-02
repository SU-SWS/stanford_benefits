(function ($) {
  /**
   * Drupal attach behaviour.
   */
  Drupal.behaviors.stanford_benefits = {
    attach: function (context, settings) {
      $( document).ready(function() {
        // Setup the variables we will use here.
        var CompTool = '.view-caw-benefit-comparison-tool';
        var SubmitButton = '#edit-submit-caw-benefit-comparison-tool';
        var MedicalActive = '#edit-term-medical-active-benefit-wrapper';
        var MedicalPreretirees = '#edit-term-medical-preretirees-benefit-wrapper';
        var MedicalRetirees = '#edit-term-medical-retirees-benefit-wrapper';
        var DentalActive = '#edit-term-dental-active-benefit-wrapper';
        var DentalRetirees = '#edit-term-dental-retirees-benefit-wrapper';

        // We need to move some things around for UI beauty.
        MoveViewHTMLElements();

        // Hide all the different exposed filters.
        // If nothing has been checked, reset the state of the form.
        if (AnyChecked() === false) {
          HideAll();
        }
        else {
          if (IsChecked('term_medical_active_benefit')) {
            ShowFormFor('term_medical_active_benefit');
          }
          if (IsChecked('term_medical_preretirees_benefit')) {
            ShowFormFor('term_medical_preretirees_benefit');
          }
          if (IsChecked('term_medical_retirees_benefit')) {
            ShowFormFor('term_medical_retirees_benefit');
          }
          if (IsChecked('term_dental_active_benefit')) {
            ShowFormFor('term_dental_active_benefit');
          }
          if (IsChecked('term_dental_retirees_benefit')) {
            ShowFormFor('term_dental_retirees_benefit');
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

          $(CompTool + ' .view-empty', context).css('display', 'none');

          $(SubmitButton, context).css('display', 'none');
        }

        // Function to show the right section when clicked.
        function ShowSection(section) {
          if ($(section + ' .description', context).is(':visible')) {
            $(section + ' .description', context).css('display', 'none');
            $(section + ' .views-widget', context).css('display', 'none');
            $(CompTool + ' .view-empty', context).css('display', 'none');
            $(SubmitButton, context).css('display', 'none');
          }
          else {
            $(section + ' .description', context).css('display', 'block');
            $(section + ' .views-widget', context).css('display', 'block');
            $(CompTool + ' .view-empty', context).css('display', 'block');
            $(SubmitButton, context).css('display', 'block');
          }

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
            return true;
          }
          if (IsChecked('term_medical_preretirees_benefit')) {
            return true;
          }
          if (IsChecked('term_medical_retirees_benefit')) {
            return true;
          }
          if (IsChecked('term_dental_active_benefit')) {
            return true;
          }
          return false;
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
