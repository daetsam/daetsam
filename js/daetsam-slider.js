/*
	Plugin daetsam-slider
*/
(function($) {
	$.daetsam_slider = {
		defaults: {}
	};
	$.fn.extend({
		daetsam_slider: function() {
			var active = 0;
			
			var contentList = $(this).find('ul');
			var amount = contentList.find('li').length;
			
			var bulletList = $('<ul class="bullet-list clearfix"></ul>')
			for (var i=0; i<amount; i++) {
				var newBullet = $('<li><a href="javascript:;">&nbsp;</a></li>');
				bulletList.append(newBullet);
			}
			
			$(this).append(bulletList);
			
			bulletList.find('li:eq(0)').addClass('active-trail');
			contentList.find('li:gt(0)').hide();
			
			bulletList.find('li').click(function(e) {
				var id = $(this).index();
				
				if (active!=id) {
					contentList.find('li:eq(' + active + ')').addClass('changing').hide('fade'); //'slide', {direction: 'left'}, '500');
					contentList.find('li:eq(' + id + ')').show('fade').removeClass('changing'); //'slide', {direction: 'left'}, '500');
					active = id;
					
					bulletList.find('li').removeClass('active-trail');
					bulletList.find('li:eq(' + id + ')').addClass('active-trail');
				}
			})
		}
	});
})(jQuery);