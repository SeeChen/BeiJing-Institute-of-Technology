var scores = 0;
function checkNull(){
	var userName = document.getElementById('userName').value;
	var userSex = document.getElementById('userSex').value;
	var userBirth = document.getElementById('userBirth').value;
	var n = 0;
	if( userName == "")
		return 0;
	else if( userSex == "" )
		return 0;
	else if( userBirth == "" )
		return 0;
	for(var i = 1 ; i <= 10 ; i++ ){
		var inputName = "Q" + i + "_Ans"
		var answer = document.getElementsByName( inputName );
		for( var j = 0 ; j < answer.length ; j++ )
			if( answer[j].checked )
				n++;
	}
	if( n != 10 )
		return 0;
	var temp ;
	n = 0 ;
	for(var i = 11 ; i <= 15 ; i++ ){
		temp = 0 ;
		var inputName = "Q" + i + "_Ans"
		var answer = document.getElementsByName( inputName );
		for( var j = 0 ; j < answer.length ; j++ ){
			if( answer[j].checked ){
				temp++;
			}
		}
		if(temp != 0)
			n++;
	}
	if ( n != 5 )
		return 0;
	var ans16 = document.getElementById('Q16').value;
	var ans17 = document.getElementById('Q17').value;
	if( ans16 == "" || ans17 == "" )
		return 0 ;
	return 1;
}
function checkRadio(){
	for(var i = 1 ; i <= 10 ; i++ ){
		var inputName = "Q" + i + "_Ans"
		var answer = document.getElementsByName( inputName );
		for( var j = 0 ; j < answer.length ; j++ )
			if( answer[j].checked )
				scores = scores + answer[j].value * 1 ;
	}
}
function checkCheckBox(){
	var n = 0 ;
	var temp = 0 ;
	for(var i = 11 ; i <= 15 ; i++ ){
		temp = 0;
		n = 0;
		var inputName = "Q" + i + "_Ans"
		var answer = document.getElementsByName( inputName );
		for( var j = 0 ; j < answer.length ; j++ ){
			if( answer[j].checked ){
				n++;
				temp = temp + answer[j].value * 1 ;
			}
		}
		if( n <= 2 ){
			scores += temp ;
		}
	}
}
function checkFill(){
	var ans16 = document.getElementById('Q16').value;
	var ans17 = document.getElementById('Q17').value;
	if( ans16 == 18 )
		scores += 15;
	if( ans17 == 4 )
		scores += 15;
}
function userSubmit(){
	var complete = checkNull();
	if( complete != 1){
		document.getElementById('noComplete').style.display="block";
		return;
	}
	checkRadio();
	checkCheckBox();
	checkFill();
	
	var userName = document.getElementById('userName').value;
	var userSex = document.getElementById('userSex').value;
	var userBirth = document.getElementById('userBirth').value;
	console.log(userName);
	console.log(userSex);
	console.log(userBirth);
	console.log(scores);
	document.getElementById('userMark').value=scores;
	document.getElementById('resultName').innerHTML=" : " + userName;
	document.getElementById('resultSex').innerHTML=" : " + userSex;
	document.getElementById('resultAge').innerHTML=" : " + userBirth;
	document.getElementById('resultScores').innerHTML=" : " + scores + "/100";
	document.getElementById('result').style.display="block";
}
function notice(){
	document.getElementById('noComplete').style.display="none";
}
function ansSubmit(){
	document.getElementById("userForm").submit();
}