function mouseClick(){
	var body=document.getElementsByTagName('body')[0];
	var textArr=["乐观","❤","积极","向上","自由","正能量","(*^▽^*)","元气满满","开心","快乐","善良","可爱","暴富","暴瘦","加油","成功","蒙的全对","考试满分"];
	document.addEventListener('click',(e)=>{
		var ev=e || window.event;
		var baseX=ev.clientX;
		var baseY=ev.clientY;
		var new_span=document.createElement('span');
		new_span.innerText=textArr[parseInt(Math.random()*textArr.length)]
		new_span.style.position='fixed';
		new_span.style.left=baseX-10+'px';
		new_span.style.top=baseY-20+'px';
		new_span.style.fontFamily="KaiTi";
		new_span.style.pointerEvents="none";
		new_span.style.zIndex="99999999";
		new_span.style.color='RGB('+parseInt(Math.random()*255)+','+parseInt(Math.random()*255)+','+parseInt(Math.random()*255)+')';
		body.appendChild(new_span);
		var timer=window.setInterval(()=>{
			new_span.style.top=parseInt(window.getComputedStyle(new_span,null)['top'])-2+'px';
			new_span.style.opacity=window.getComputedStyle(new_span,null)['opacity']-0.02;
		},30);
		window.setTimeout(()=>{
			window.clearInterval(timer);
			body.removeChild(new_span);
		},1000);
	},false);
}
function stopRightClick(){
	document.oncontextmenu=function(){
		return false;
	};
	document.onselectstart=function(){
		mouseClick();
		return false;
	}
	document.oncopy=function(){
		mouseClick();
		return false;
	}
	document.onkeydown=function(){
		if(window.event.keyCode==123)
			return false;
	};
}