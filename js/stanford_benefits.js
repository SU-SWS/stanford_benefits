(function ($) {
/**
 * Drupal attach behaviour.
 */
  Drupal.behaviors.stanford_benefits = {
    attach: function (context, settings) {
      $( document ).ready(function() {
        // If no checkboxes are selected, hide results to fix view bug.
        if (!$('input[name="term_medical_active_benefit[]"]:checked').length &&
          !$('input[name="term_medical_preretirees_benefit[]"]:checked').length &&
          !$('input[name="term_medical_retirees_benefit[]"]:checked').length &&
          !$('input[name="term_dental_active_benefit[]"]:checked').length) {
            $(".view-caw-benefit-comparison-tool .view-content").css("display", "none");
        }
        else {
          $(".view-caw-benefit-comparison-tool .view-content").css("display", "block");
        }
      });
    }
  };
})(jQuery);
