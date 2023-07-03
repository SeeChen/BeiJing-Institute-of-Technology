window.onload=function(){
	pageLoading();
	mouseClick();
	stopRightClick();
	getTime();
	topBackground();
	setOnclick();
	greeting();
	scrollEvent();
	whenResize();
	setMenu_List();
	navigationEvent();
	console.log('%c SeeChen\'s Website','color:#1aa260;font-size:4em;font-family:ink free;');
	console.log('%c 何以解忧，唯有暴富！','color:red;font-size:3em;font-family:kaiti;');
}
function pageLoading(){
	if(document.readyState=="complete"){
		document.getElementsByTagName('body')[0].style.opacity="1";
		document.getElementsByTagName('body')[0].style.cursor="auto";
		document.getElementsByTagName('html')[0].style.cursor="auto";
		document.getElementById("laodingContent").style.opacity="0";
		setTimeout(function(){
			document.getElementById("laodingContent").style.display="none";
		},500);
	}
}
function topBackground(){
	if(new Date().getHours()>=17||new Date().getHours()<7){
		document.getElementById("top_Background").style.background=
		"linear-gradient(to top,#EDF1ECff,#EDF1EC80),url(https://cdn.wallpapersafari.com/79/70/Ly63su.jpg)";
	}else{
		document.getElementById("top_Background").style.background=
		"linear-gradient(to top,#EDF1ECff,#EDF1EC80),url(https://previews.123rf.com/images/_ig0rzh_/_ig0rzh_1011/_ig0rzh_101100055/8198397-wide-background-summer-day-sun-sky-clouds.jpg)";
	}
	document.getElementById("top_Background").style.height=document.getElementById("top_Bar").clientHeight*1.2+"px";
	document.getElementById("top_Background").style.backgroundRepeat="no-repeat";
	document.getElementById("top_Background").style.backgroundSize="cover";
}
function setOnclick(){
	document.getElementById('time_Module').onclick=function(){window.open("https://dayspedia.com/time/online/","_blank");};
	$("#title_Name").click(function(){
		alert("别点了，痛！！！");
	});
}

function scrollEvent(){
	var orText=document.getElementById("greeting").innerHTML;
	var prevScrollpos=window.pageYOffset;
	window.onscroll=function(){
		var currentScrollPos=window.pageYOffset;
		if(prevScrollpos>currentScrollPos){
			//scroll up
		}else{
			//scroll down
			document.getElementById("top_Bar").style.height="2.6em";
			document.getElementById("top_Bar").style.background="rgba(255,255,255,0.5)";
			document.getElementById("top_Bar").style.backdropFilter="blur(0.5em)";
			document.getElementById("top_Bar").style.boxShadow="2px 2px 2px #130f30";
			document.getElementById("greeting").style.fontSize="1.7em";
			document.getElementById("greeting").style.left="3em";
			document.getElementById("greeting").innerHTML="SeeChen's Website";
		}
		prevScrollpos = currentScrollPos;
		if(document.body.scrollTop==0&&document.documentElement.scrollTop==0){
			//when scroll to top
			document.getElementById("top_Bar").style.height="15%";
			document.getElementById("top_Bar").style.boxShadow="none";
			document.getElementById("top_Bar").style.background="rgba(237,241,236,0)";
			document.getElementById("top_Bar").style.backdropFilter="blur(0em)";
			document.getElementById("greeting").style.fontSize="3em";
			document.getElementById("greeting").style.left="1em";
			document.getElementById("greeting").innerHTML=orText;
		}
	}
}





var menu_List=["About Me","Schedule","Favorite Movie","My Mood","Best Friend"];
var anchor_List=["about","class","Favorite","mood","friend"]
function setMenu_List(){
	var toSetTitleLength=menu_List.length;
	for(var i=0;i<toSetTitleLength;i++){
		document.getElementById("navigation_Bar").innerHTML+="<a href='#"+anchor_List[i]+"'><span class='menu_List'>"+menu_List[i]+"</span>";
	}
}
function navigationEvent(){
	var menu_List_Width=document.getElementsByClassName("menu_List")[0].clientWidth;
	document.getElementById("currentLoc").style.width=menu_List_Width+"px";
	var menu_ListLength=document.getElementsByClassName("menu_List").length;
	document.getElementsByClassName("menu_List")[0].style.color="#ffffff"
	for(var i=0;i<menu_ListLength;i++){
		var menu_ListID="menu_List-"+i;
		document.getElementsByClassName("menu_List")[i].setAttribute("id",menu_ListID);
		document.getElementsByClassName("menu_List")[i].onclick=function(){
			for(var j=0;j<menu_ListLength;j++)
				document.getElementsByClassName("menu_List")[j].style.color="#969696";
			this.style.color="#fff";
			var toChange=this.getAttribute('id');
			document.getElementById("currentLoc").style.left=
				document.getElementById(toChange).offsetLeft+"px";
		}
	}
}
function whenResize(){
	let h = window.innerHeight;
	let w = window.innerWidth;
	window.onresize=function(){
		if(h!=window.innerHeight || w!=window.innerWidth){
			location.reload();
		}
	}
}
