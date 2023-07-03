$(function(){
	$.fn.snow({
		minSize:5,	
		maxSize:50,
		newOn:500
	});
});
(function($){
	$.fn.snow = function(options){
		var $flake= $('<div id="snowbox" />').css({'position': 'fixed', 'top': '-50px','z-index':'10000','overflow':'hidden','pointer-events':'none'}).html('<h1>❤</h1>'),
		documentHeight=$(document).height(),
		documentWidth= $(document).width(),
		defaults={
			minSize:10,
			maxSize:20,
			newOn:1000,
			flakeColor:"#f00"
		},
		options=$.extend({}, defaults, options);
		var interval=setInterval( function(){
			var startPositionLeft=Math.random()*documentWidth-100,
			startOpacity=0.5+Math.random(),
			sizeFlake=options.minSize+Math.random()*options.maxSize,
			endPositionTop=documentHeight-100,
			endPositionLeft=startPositionLeft-100+Math.random()*100,
			durationFall=documentHeight*10+Math.random()*5000;
			$flake.clone().appendTo('body').css({
				left:startPositionLeft,
				opacity:startOpacity,
				'font-size':sizeFlake,
				color:options.flakeColor
			}).animate({
				top:endPositionTop,
				left:endPositionLeft,
				opacity:0.2
			},durationFall,'linear',function(){
				$(this).remove()
			});
		},options.newOn);
	};
})(jQuery);