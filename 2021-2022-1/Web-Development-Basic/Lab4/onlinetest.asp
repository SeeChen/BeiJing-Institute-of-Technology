<!DOCTYPE html>
<html>
	<head>
		<title>Online Test</title>
		
		<meta charset="UTF-8"/>
		<meta name="author" content="SeeChen Lee"/>
		<meta name="revised" content="SeeChen, Wednesday 29 September 2021 01:07:15 GMT +08:00"/>
		<meta name="Copyright" content="By SeeChen">
		<meta http-equiv="Content-Language" content="zh-cn"/>
		
		<link rel="stylesheet" type="text/css" href="./onlinetest.css"/>
		
		<script src="./onlinetest.js" type="text/javascript"></script>
	</head>
	<body>
		<p class="Title">Online Test Assignment</p>
		<div id="questionsBody">
		<div id="descript">
			<p>Mathematics is a very important subject in daily life, and it is inseparable from the scope of mathematics in life.</p>
			<p>Next, let's test our math level!</p>
		</div>
		<form method="post" id="userForm" action="submit.asp">
			<fieldset>
				<legend>Fill in your personal information</legend>
				<table border="0" style="width:100%;border-spacing:0.5em;">
					<tr>
						<td style="width:20%;text-align:right;">
							<label for="userName"><span>Your Name : </span></label>
						</td>
						<td style="width:80%;text-align:left;padding-left:1em;">
							<input type="text" name="userName" id="userName" required="required" autocomplete="off" placeholder="fill your name" class="textStyle"/>
						</td>
					</tr>
					<tr>
						<td style="width:20%;text-align:right;">
							<label for="userSex"><span>Sex : </span></label>
						</td>
						<td style="width:80%;text-align:left;padding-left:1em;">
							<select id="userSex" name="userSex" required class="textStyle">
								<option selected="selected"></option>
								<option value="Male">Male</option>
								<option value="Female">Female</option>
								<option value="Other">Other</option>
								<option value="Keep Secret">Keep Secret</option>
							</select>
						</td>
					</tr>
					<tr>
						<td style="width:20%;text-align:right;">
							<label for="userBirth"><span>Birthday : </span></label>
						</td>
						<td style="width:80%;text-align:left;padding-left:1em;">
							<input type="date" name="userBirth" id="userBirth" required="required" autocomplete="off" class="textStyle"/>
						</td>
					</tr>
				</table>
			</fieldset>
			<fieldset>
				<legend>Simple exercises</legend>
				<p class="illustrate">Choose a correct answer.</p>
				<div>
					<p class="QuestionNum">Question 01:</p>
					<p class="QContent">1 + 2 + 3 + ··· + 100 = </p>
					<label><input type="radio" name="Q1_Ans" value="2" class="ansChoice">5050</label></br>
					<label><input type="radio" name="Q1_Ans" value="0" class="ansChoice">500500</label></br>
					<label><input type="radio" name="Q1_Ans" value="0" class="ansChoice">50505</label></br>
					<label><input type="radio" name="Q1_Ans" value="0" class="ansChoice">5500</label>
				</div>
				<div>
					<p class="QuestionNum">Question 02:</p>
					<p class="QContent">1 + 2 + 3 + ··· + 999 + 1000 = </p>
					<label><input type="radio" name="Q2_Ans" value="0" class="ansChoice">5050</label></br>
					<label><input type="radio" name="Q2_Ans" value="2" class="ansChoice">500500</label></br>
					<label><input type="radio" name="Q2_Ans" value="0" class="ansChoice">50505</label></br>
					<label><input type="radio" name="Q2_Ans" value="0" class="ansChoice">5500</label>
				</div>
				<div>
					<p class="QuestionNum">Question 03:</p>
					<p class="QContent">1 + 2 + 3 + ··· + 999 + 1000 ÷ 2 = </p>
					<label><input type="radio" name="Q3_Ans" value="0" class="ansChoice">5050</label></br>
					<label><input type="radio" name="Q3_Ans" value="0" class="ansChoice">500500</label></br>
					<label><input type="radio" name="Q3_Ans" value="2" class="ansChoice">500000</label></br>
					<label><input type="radio" name="Q3_Ans" value="0" class="ansChoice">5500</label>
				</div>
				<div>
					<p class="QuestionNum">Question 04:</p>
					<p class="QContent">1 + 2 + 3 + ··· + 999 + 1000 &times; 2 = </p>
					<label><input type="radio" name="Q4_Ans" value="0" class="ansChoice">5050</label></br>
					<label><input type="radio" name="Q4_Ans" value="2" class="ansChoice">501500</label></br>
					<label><input type="radio" name="Q4_Ans" value="0" class="ansChoice">500000</label></br>
					<label><input type="radio" name="Q4_Ans" value="0" class="ansChoice">5500</label>
				</div>
				<div>
					<p class="QuestionNum">Question 05:</p>
					<p class="QContent">-100 &times; -99 &times; ··· &times; -1 &times; 0 &times; 1 &times; ··· &times; 99 &times; 100 = </p>
					<label><input type="radio" name="Q5_Ans" value="0" class="ansChoice">-&infin;</label></br>
					<label><input type="radio" name="Q5_Ans" value="0" class="ansChoice">-1</label></br>
					<label><input type="radio" name="Q5_Ans" value="0" class="ansChoice">1</label></br>
					<label><input type="radio" name="Q5_Ans" value="2" class="ansChoice">0</label>
				</div>
				<div>
					<p class="QuestionNum">Question 06:</p>
					<p class="QContent">( 1 )<sup>2</sup> &times; ( -1 )<sup>2</sup> &times; ( 1 )<sup>2</sup> &times; ( -1 )<sup>2</sup> &times; ( 1 )<sup>2</sup> &times; ( -1 )<sup>2</sup> &times; ( 1 )<sup>2</sup> &times; ( -1 )<sup>2</sup> &times; ··· = </p>
					<label><input type="radio" name="Q6_Ans" value="0" class="ansChoice">-&infin;</label></br>
					<label><input type="radio" name="Q6_Ans" value="0" class="ansChoice">-1</label></br>
					<label><input type="radio" name="Q6_Ans" value="2" class="ansChoice">1</label></br>
					<label><input type="radio" name="Q6_Ans" value="0" class="ansChoice">0</label>
				</div>
				<div>
					<p class="QuestionNum">Question 07:</p>
					<p class="QContent">- ( -&infin; )</p>
					<label><input type="radio" name="Q7_Ans" value="0" class="ansChoice">-&infin;</label></br>
					<label><input type="radio" name="Q7_Ans" value="2" class="ansChoice">&infin;</label></br>
					<label><input type="radio" name="Q7_Ans" value="0" class="ansChoice">1 </label></br>
					<label><input type="radio" name="Q7_Ans" value="0" class="ansChoice">-1</label>
				</div>
				<div>
					<p class="QuestionNum">Question 08:</p>
					<p class="QContent">1 + 2 + 3 + 4 + ··· + &infin;</p>
					<label><input type="radio" name="Q8_Ans" value="0" class="ansChoice">-&infin;</label></br>
					<label><input type="radio" name="Q8_Ans" value="0" class="ansChoice">&infin;</label></br>
					<label><input type="radio" name="Q8_Ans" value="0" class="ansChoice">1 / 12</label></br>
					<label><input type="radio" name="Q8_Ans" value="2" class="ansChoice">-1 / 12</label>
				</div>
				<div>
					<p class="QuestionNum">Question 09:</p>
					<p class="QContent">1 - 1 + 1 - 1 + 1 - 1 + ··· </p>
					<label><input type="radio" name="Q9_Ans" value="2" class="ansChoice">1 / 2 </label></br>
					<label><input type="radio" name="Q9_Ans" value="0" class="ansChoice">-1 / 2</label></br>
					<label><input type="radio" name="Q9_Ans" value="0" class="ansChoice">0</label></br>
					<label><input type="radio" name="Q9_Ans" value="0" class="ansChoice">&infin;</label>
				</div>
				<div>
					<p class="QuestionNum">Question 10:</p>
					<p class="QContent">1 - 2 + 3 - 4 + 5 - 6 + ··· </p>
					<label><input type="radio" name="Q10_Ans" value="0" class="ansChoice">-&infin;</label></br>
					<label><input type="radio" name="Q10_Ans" value="0" class="ansChoice">&infin;</label></br>
					<label><input type="radio" name="Q10_Ans" value="2" class="ansChoice">1 / 4</label></br>
					<label><input type="radio" name="Q10_Ans" value="0" class="ansChoice">-1 / 4</label>
				</div>
			</fieldset>
			<fieldset>
				<legend>Multiple choice questions</legend>
				<p class="illustrate">Choose a correct answer. ( Maximum 2 answers )</p>
				<div>
					<p class="QuestionNum">Question 11:</p>
					<p class="QContent">Which of the following is the correct approximation of &#960;</p>
					<label><input type="checkbox" name="Q11_Ans" value="5" class="ansChoice">3.141592653589793238462643383</label></br>
					<label><input type="checkbox" name="Q11_Ans" value="0" class="ansChoice">3.1415926535897932384626333</label></br>
					<label><input type="checkbox" name="Q11_Ans" value="5" class="ansChoice">3.14159265358979323846264338327950</label></br>
					<label><input type="checkbox" name="Q11_Ans" value="0" class="ansChoice">3.14159265358979383433832795</label>
				</div>
				<div>
					<p class="QuestionNum">Question 12:</p>
					<p class="QContent">Which of the following is the correct approximation of 2 <sup>0.5</sup></p>
					<label><input type="checkbox" name="Q12_Ans" value="5" class="ansChoice">1.414213562373095048801688724</label></br>
					<label><input type="checkbox" name="Q12_Ans" value="5" class="ansChoice">1.4142135623730950488016887242097</label></br>
					<label><input type="checkbox" name="Q12_Ans" value="0" class="ansChoice">1.414213562373O95048801688724209698078569672</label></br>
					<label><input type="checkbox" name="Q12_Ans" value="0" class="ansChoice">1.4142135623730950488076078569672</label>
				</div>
				<div>
					<p class="QuestionNum">Question 13:</p>
					<p class="QContent">Which answer is corrcet answer?</p>
					<label><input type="checkbox" name="Q13_Ans" value="5" class="ansChoice">1 < 2</label></br>
					<label><input type="checkbox" name="Q13_Ans" value="0" class="ansChoice">1 &#8804; 2</label></br>
					<label><input type="checkbox" name="Q13_Ans" value="0" class="ansChoice">1 &#8805; 2</label></br>
					<label><input type="checkbox" name="Q13_Ans" value="5" class="ansChoice">1 ≠ 2</label>
				</div>
				<div>
					<p class="QuestionNum">Question 14:</p>
					<p class="QContent">Which answer is incorrect ?</p>
					<label><input type="checkbox" name="Q14_Ans" value="0" class="ansChoice">1 < 2</label></br>
					<label><input type="checkbox" name="Q14_Ans" value="5" class="ansChoice">1 &#8804; 2</label></br>
					<label><input type="checkbox" name="Q14_Ans" value="5" class="ansChoice">1 &#8805; 2</label></br>
					<label><input type="checkbox" name="Q14_Ans" value="0" class="ansChoice">1 ≠ 2</label>
				</div>
				<div>
					<p class="QuestionNum">Question 15:</p>
					<p class="QContent">Which answer is incorrect ?</p>
					<label><input type="checkbox" name="Q15_Ans" value="0" class="ansChoice">X + X &times; X - X ÷ X = 2X - 1</label></br>
					<label><input type="checkbox" name="Q15_Ans" value="5" class="ansChoice">X + X &times; X - X ÷ X = X<sup>2</sup> + X - 1</label></br>
					<label><input type="checkbox" name="Q15_Ans" value="0" class="ansChoice">( X<sup>2</sup> + 2X + 1 ) ÷ ( X + 1 ) = X</label></br>
					<label><input type="checkbox" name="Q15_Ans" value="5" class="ansChoice">( X<sup>2</sup> + 2X + 1 ) ÷ ( X + 1 ) = X + 1</label>
				</div>
			</fieldset>
			<fieldset>
				<legend>Fill blanks question</legend>
				<p class="illustrate">Choose a correct answer.</p>
				<div>
					<p class="QuestionNum">Question 16:</p>
					<!-- 18 -->
					<label for="Q16"><p class="QContent">There are 32 chickens and rabbits in the cage, with a total of 100 legs. how many rabbits there are? ( Just fill the number )</p></label>
					<input type="number" id="Q16" name="Q16_Ans" class="textStyle QAns"/>
				</div>
				<div>
					<p class="QuestionNum">Question 17:</p>
					<!-- 4 -->
					<label for="Q17"><p class="QContent">鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问共几种方法买鸡？</p></label>
					<input type="number" id="Q17" name="Q17_Ans" class="textStyle QAns"/>
				</div>
				<input type="text" id="userMark" name="userMark" style="display:none;"/>
			</fieldset>
		</form>
		<button id="submitBtn" onclick="userSubmit()">Submit</button>
		</div>
		<div id="noComplete">
			<div style="position:absolute;margin:auto;top:0;bottom:0;left:0;right:0;width:50%;height:25vh;background:#f00;border-radius:2em;box-shadow:5px 5px 5px #000;">
				<p style="color:#fff;width:100%;text-align:center;height:25vh;line-height:25vh;font-size:1.5em;">Please make sure you fill in all the blanks !!!</p>
				<p style="color:#fff;text-align:center;cursor:pointer;width:20%;background:#f00;margin:2em auto 0;padding:1em;border-radius:2em;box-shadow:5px 5px 5px #000;" onclick="notice()">Okay</p>
			</div>
		</div>
		<div id="result">
			<p class="Title" style="margin:2em;">Your Scores :</p>
			<div style="position:absolute;margin:auto;top:0;bottom:0;left:0;right:0;width:60%;height:30vh;border-radius:2em;border:0.15em solid #1aa260;padding:3em;">
				<table border=0 style="width:100%;height:100%;table-layout:fixed;font-size:2em;font-family:'Simsun';font-weight:bold;">
					<tr>
						<td>Name</td>
						<td ><p id="resultName"></p></td>
					</tr>
					<tr>
						<td>Sex</td>
						<td id="resultSex"></td>
					</tr>
					<tr>
						<td>Birthday</td>
						<td id="resultAge"></td>
					</tr>
					<tr>
						<td>Scores</td>
						<td id="resultScores"></td>
					</tr>
				</table>
				<p style="color:#1aa260;text-align:center;cursor:pointer;width:20%;margin:2em auto 0;padding:1em;border-radius:2em;border:0.15em solid #1aa260;background:#EDF1EC" onclick="ansSubmit()">Okay</p>
			</div>
		</div>
	</body>
</html>