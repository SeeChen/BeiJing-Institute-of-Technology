function getTime(){
	var today=new Date();
	var hrs=today.getHours();
	var min=today.getMinutes();
	hrs=checkTime(hrs);
	min=checkTime(min);
	document.getElementById("time_Module").innerHTML=hrs+":"+min;
	t=setTimeout(function(){getTime();},100);
}
function checkTime(i){
	if(i<10)
		i="0"+i;
	return i;
}

function greeting(){
	var hours=new Date().getHours();
	var arr=0;
	var greetingSentence=["Good Morning","Good Afternoon","Good Evening","Good Night"];
	if(hours>3&&hours<11){
		arr=0;
	}else if(hours<17&&hours>3){
		arr=1;
	}else if(hours<22&&hours>3){
		arr=2;
	}else{
		arr=3;
	}
	document.getElementById("greeting").innerHTML=greetingSentence[arr]+"  !";
	t=setTimeout(function(){greeting();},300000);
}