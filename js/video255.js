(function($) {
	var f = $('#player1'),
		url = 'http://player.vimeo.com/video/67957462';
	
	// Listen for messages from the player
	if (window.addEventListener){
		window.addEventListener('message', onMessageReceived, false);
	}
	else {
		window.attachEvent('onmessage', onMessageReceived, false);
	}
	
	// Handle messages received from the player
	function onMessageReceived(e) {
		var data = JSON.parse(e.data);
		
		switch (data.event) {
			case 'ready':
				onReady();
				break;
		}
	}
	
	// Helper function for sending a message to the player
	function post(action, value) {
		var data = { method: action };
		
		if (value) {
			data.value = value;
		}
		
		$('#player1').contentWindow.postMessage(JSON.stringify(data), url);
	}
	
	function onReady() {
		
		post('play');
		post('setVolume', 0);
	}
})(jQuery);