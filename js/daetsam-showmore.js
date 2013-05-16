/*
	Plugin daetsam-showmore
*/
(function($) {
	$.daetsam_showmore = {
		defaults: {}
	};
	$.fn.extend({
		daetsam_showmore: function() {
			$('.nube-de-tags-cortina').find('a').click(function (e) {
				$('.nube-de-tags').removeClass('nube-de-tags-off');
				$('.nube-de-tags-cortina').addClass('nube-de-tags-cortina-off');
			})
		}
	});
})(jQuery);