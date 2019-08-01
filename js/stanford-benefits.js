(function ($) {
/**
 * Drupal attach behaviour.
 */
  Drupal.behaviors.stanford_benefits = {
    attach: function (context, settings) {
      $( document ).ready(function() {
        // We need to hid fields when the page loads.
        $('#edit-term-medical-preretirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-preretirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-retirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-retirees-benefit-wrapper .views-widget').css('display', 'none');

        $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'none');

        $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'none');

        $('#edit-term-medical-active-benefit-wrapper').before( $('#medical-plan-header') );
        $('#edit-term-dental-active-benefit-wrapper').before( $('#dental-plan-header') );
        $('.view-header > p').remove();
        $('.view-caw-benefit-comparison-tool .view-header').before( $('.view-caw-benefit-comparison-tool .view-header h2.plan-rates-title') );
        $('#edit-term-medical-active-benefit-wrapper .views-widget').before( $('#edit-term-medical-active-benefit-wrapper .description') );
        $('#edit-term-medical-preretirees-benefit-wrapper .views-widget').before( $('#edit-term-medical-preretirees-benefit-wrapper .description') );
        $('#edit-term-medical-retirees-benefit-wrapper .views-widget').before( $('#edit-term-medical-retirees-benefit-wrapper .description') );
        $('#edit-term-dental-active-benefit-wrapper .views-widget').before( $('#edit-term-dental-active-benefit-wrapper .description') );
        $('#edit-term-dental-retirees-benefit-wrapper .views-widget').before( $('#edit-term-dental-retirees-benefit-wrapper .description') );

        // If no checkboxes are selected, hide results to fix view bug.
        if (!$('input[name="term_medical_active_benefit[]"]:checked').length &&
          !$('input[name="term_medical_preretirees_benefit[]"]:checked').length &&
          !$('input[name="term_medical_retirees_benefit[]"]:checked').length &&
          !$('input[name="term_dental_active_benefit[]"]:checked').length) {
            $('.view-caw-benefit-comparison-tool .view-content').css("display", "none");
        }
        else {
          $('.view-caw-benefit-comparison-tool .view-content').css("display", "block");
        }
      });

      $('#edit-submit-caw-benefit-comparison-tool').click(function() {

      });

      // Show the Medical/Active exposed filters
      $('#edit-term-medical-active-benefit-wrapper label').click(function() {
        if ($('#edit-term-medical-active-benefit-wrapper .description').is(':visible')) {
          $('#edit-term-medical-active-benefit-wrapper .description').css('display', 'none');
          $('#edit-term-medical-active-benefit-wrapper .views-widget').css('display', 'none');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'none');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'none');
        }
        else {
          $('#edit-term-medical-active-benefit-wrapper .description').css('display', 'block');
          $('#edit-term-medical-active-benefit-wrapper .views-widget').css('display', 'block');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'block');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'block');
        }

        $('#edit-term-medical-preretirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-preretirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-retirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-retirees-benefit-wrapper .views-widget').css('display', 'none');
      });

      // Show the Medical/Pre-retirees exposed filters
      $('#edit-term-medical-preretirees-benefit-wrapper label').click(function() {
        if ($('#edit-term-medical-preretirees-benefit-wrapper .description').is(':visible')) {
          $('#edit-term-medical-preretirees-benefit-wrapper .description').css('display', 'none');
          $('#edit-term-medical-preretirees-benefit-wrapper .views-widget').css('display', 'none');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'none');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'none');
        }
        else {
          $('#edit-term-medical-preretirees-benefit-wrapper .description').css('display', 'block');
          $('#edit-term-medical-preretirees-benefit-wrapper .views-widget').css('display', 'block');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'block');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'block');
        }

        $('#edit-term-medical-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-retirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-retirees-benefit-wrapper .views-widget').css('display', 'none');
      });

      // Show the Medical/Retirees exposed filters
      $('#edit-term-medical-retirees-benefit-wrapper label').click(function() {
        if ($('#edit-term-medical-retirees-benefit-wrapper .description').is(':visible')) {
          $('#edit-term-medical-retirees-benefit-wrapper .description').css('display', 'none');
          $('#edit-term-medical-retirees-benefit-wrapper .views-widget').css('display', 'none');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'none');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'none');
        }
        else {
          $('#edit-term-medical-retirees-benefit-wrapper .description').css('display', 'block');
          $('#edit-term-medical-retirees-benefit-wrapper .views-widget').css('display', 'block');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'block');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'block');
        }

        $('#edit-term-medical-preretirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-preretirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-retirees-benefit-wrapper .views-widget').css('display', 'none');
      });

      // Show the Dental/Active exposed filters
      $('#edit-term-dental-active-benefit-wrapper label').click(function() {
        if ($('#edit-term-dental-active-benefit-wrapper .description').is(':visible')) {
          $('#edit-term-dental-active-benefit-wrapper .description').css('display', 'none');
          $('#edit-term-dental-active-benefit-wrapper .views-widget').css('display', 'none');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'none');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'none');
        }
        else {
          $('#edit-term-dental-active-benefit-wrapper .description').css('display', 'block');
          $('#edit-term-dental-active-benefit-wrapper .views-widget').css('display', 'block');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'block');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'block');
        }

        $('#edit-term-medical-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-preretirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-preretirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-retirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-retirees-benefit-wrapper .views-widget').css('display', 'none');
      });

      // Show the Dental/Retirees exposed filters
      $('#edit-term-dental-retirees-benefit-wrapper label').click(function() {
        if ($('#edit-term-dental-retirees-benefit-wrapper .description').is(':visible')) {
          $('#edit-term-dental-retirees-benefit-wrapper .description').css('display', 'none');
          $('#edit-term-dental-retirees-benefit-wrapper .views-widget').css('display', 'none');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'none');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'none');
        }
        else {
          $('#edit-term-dental-retirees-benefit-wrapper .description').css('display', 'block');
          $('#edit-term-dental-retirees-benefit-wrapper .views-widget').css('display', 'block');
          $('.view-caw-benefit-comparison-tool .view-empty').css('display', 'block');
          $('#views-exposed-form-caw-benefit-comparison-tool-block .views-submit-button').css('display', 'block');
        }

        $('#edit-term-medical-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-active-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-preretirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-preretirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-medical-retirees-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-medical-retirees-benefit-wrapper .views-widget').css('display', 'none');

        $('#edit-term-dental-active-benefit-wrapper .description').css('display', 'none');
        $('#edit-term-dental-active-benefit-wrapper .views-widget').css('display', 'none');
      });
    }
  };
})(jQuery);
