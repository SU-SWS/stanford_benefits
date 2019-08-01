(function ($) {
/**
 * Drupal attach behaviour.
 */

  Drupal.behaviors.stanford_benefits = {
    attach: function (context, settings) {
      var ActiveSelection = false;
      $( document ).ready(function() {
        // If no checkboxes are selected hide things.

        var CompTool = '.view-caw-benefit-comparison-tool';
        var CompToolBlock = '#views-exposed-form-caw-benefit-comparison-tool-block';
        var MedicalActive = '#edit-term-medical-active-benefit-wrapper';
        var MedicalPreretirees = '#edit-term-medical-preretirees-benefit-wrapper';
        var MedicalRetirees = '#edit-term-medical-retirees-benefit-wrapper';
        var DentalActive = '#edit-term-dental-active-benefit-wrapper';
        var DentalRetirees = '#edit-term-dental-retirees-benefit-wrapper';

        // If nothing has been checked, reset the state of the form.
        if (!AnyChecked()) {
          // Hide all the different exposed filters.
          HideAll();
          // We need to move some things around for UI beauty.
          MoveViewHTMLElements();
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
          if (IsChecked('term_dental_active_benefit')) {
            ShowFormFor('term_dental_active_benefit');
          }
        }
        // Show the Medical/Active exposed filters
        $(MedicalActive + ' label').click(function() {
          ShowSection(MedicalActive);
        });

        // Show the Medical/Pre-retirees exposed filters
        $(MedicalPreretirees + ' label').click(function() {
          ShowSection(MedicalPreretirees);
        });

        // Show the Medical/Retirees exposed filters
        $(MedicalRetirees + ' label').click(function() {
          ShowSection(MedicalRetirees);
        });

        // Show the Dental/Active exposed filters
        $(DentalActive + ' label').click(function() {
          ShowSection(DentalActive);
        });

        // Show the Dental/Retirees exposed filters
        $(DentalRetirees + ' label').click(function() {
          ShowSection(DentalRetirees);
        });

        // Function to move some things around for UI beauty.
        function MoveViewHTMLElements() {
          $(MedicalActive).before( $('#medical-plan-header') );
          $(DentalActive).before( $('#dental-plan-header') );
          $('.view-header' + ' > p').remove();
          $('.view-caw-benefit-comparison-tool' + ' .view-header').before( $('.view-caw-benefit-comparison-tool' + ' .view-header' + ' h2.plan-rates-title') );
          $(MedicalActive + ' .views-widget').before( $(MedicalActive + ' .description') );
          $(MedicalPreretirees + ' .views-widget').before( $(MedicalPreretirees + ' .description') );
          $(MedicalRetirees + ' .views-widget').before( $(MedicalRetirees + ' .description') );
          $(DentalActive + ' .views-widget').before( $(DentalActive + ' .description') );
          $(DentalRetirees + ' .views-widget').before( $(DentalRetirees + ' .description') );
        }
        // Function to hide all the different exposed filters.
        function HideAll() {
          $(MedicalActive + ' .description').css('display', 'none');
          $(MedicalActive + ' .views-wrapper').css('display', 'none');

          $(MedicalPreretirees + ' .description').css('display', 'none');
          $(MedicalPreretirees + ' .views-wrapper').css('display', 'none');

          $(MedicalRetirees + ' .description').css('display', 'none');
          $(MedicalRetirees + ' .views-wrapper').css('display', 'none');

          $(DentalActive + ' .description').css('display', 'none');
          $(DentalActive + ' .views-wrapper').css('display', 'none');

          $(DentalRetirees + ' .description').css('display', 'none');
          $(DentalRetirees + ' .views-wrapper').css('display', 'none');

          $('.view-caw-benefit-comparison-tool' + ' .view-empty').css('display', 'none');

          $('#views-exposed-form-caw-benefit-comparison-tool-block' + ' .views-submit-button').css('display', 'none');
        }

        // Function to show the right section when clicked.
        function ShowSection(section) {
          if ($(section + ' .description').is(':visible')) {
            $(section + ' .description').css('display', 'none');
            $(section + ' .views-widget').css('display', 'none');
            $(CompTool + ' .view-empty').css('display', 'none');
            $(CompToolBlock + ' .views-submit-button').css('display', 'none');
          }
          else {
            $(section + ' .description').css('display', 'block');
            $(section + ' .views-widget').css('display', 'block');
            $(CompTool + ' .view-empty').css('display', 'block');
            $(CompToolBlock + ' .views-submit-button').css('display', 'block');
          }

          if ( section !== MedicalActive) {
            $(MedicalActive + ' .description').css('display', 'none');
            $(MedicalActive + ' .views-widget').css('display', 'none');
          }
          if ( section !== MedicalPreretirees) {
            $(MedicalPreretirees + ' .description').css('display', 'none');
            $(MedicalPreretirees + ' .views-widget').css('display', 'none');
          }
          if ( section !== MedicalRetirees) {
            $(MedicalRetirees + ' .description').css('display', 'none');
            $(MedicalRetirees + ' .views-widget').css('display', 'none');
          }
          if ( section !== DentalActive) {
            $(DentalActive + ' .description').css('display', 'none');
            $(DentalActive + ' .views-widget').css('display', 'none');
          }
          if ( section !== DentalRetirees) {
            $(DentalRetirees + ' .description').css('display', 'none');
            $(DentalRetirees + ' .views-widget').css('display', 'none');
          }
        }

        // Function to tell if anything is check on the exposed fields.
        function IsChecked(term) {
          return $('input[name="' + term + '"]:checked').length;
        }
        // Are there any checkboxes selected.
        function AnyChecked() {
          var selected = 0;
          // If no checkboxes are selected, false else true.
          if (IsChecked('term_medical_active_benefit')) {
            selected = 1;
          }
          if (IsChecked('term_medical_preretirees_benefit')) {
            selected = 1;
          }
          if (IsChecked('term_medical_retirees_benefit')) {
            selected = 1;
          }
          if (IsChecked('term_dental_active_benefit')) {
            selected = 1;
          }

          return selected;
        }

        // Function to show and hide the right section for the views exposed filters.
        function ShowFormFor(section) {
          $('#' + section + ' .description').css('display', 'block');
          $('#' + section + ' .views-widget').css('display', 'block');

          if ( section !== MedicalActive) {
            $(MedicalActive + ' .description').css('display', 'none');
            $(MedicalActive + ' .views-widget').css('display', 'none');
          }
          if ( section !== MedicalPreretirees) {
            $(MedicalPreretirees + ' .description').css('display', 'none');
            $(MedicalPreretirees + ' .views-widget').css('display', 'none');
          }
          if ( section !== MedicalRetirees) {
            $(MedicalRetirees + ' .description').css('display', 'none');
            $(MedicalRetirees + ' .views-widget').css('display', 'none');
          }
          if ( section !== DentalActive) {
            $(DentalActive + ' .description').css('display', 'none');
            $(DentalActive + ' .views-widget').css('display', 'none');
          }
          if ( section !== DentalRetirees) {
            $(DentalRetirees + ' .description').css('display', 'none');
            $(DentalRetirees + ' .views-widget').css('display', 'none');
          }
        }
      });
    }
  };
})(jQuery);
