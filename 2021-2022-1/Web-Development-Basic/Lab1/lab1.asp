<!DOCTYPE html>
<html>
	<head>
		<title>First APS Program</title>
		
		<meta charset="UTF-8"/>
		<meta name="author" content="SeeChen Lee"/>
		<meta name="revised" content="SeeChen, Saturday 25 September 2021 20:17:20 GMT +08:00"/>
		<meta name="Copyright" content="By SeeChen">
		<meta http-equiv="Content-Language" content="zh-cn"/>
		
		<style>
			*{
				padding:0;
				margin:0;	
			}
			html,body{
				height:100vh;
				background:#BDFFBD;
			}
			#Greeting{
				color:#1aa260;
				font-family:"ink free";
				font-size:5em;
				padding:0.2em 0.5em;
			}
			#Greeting:before,#Greeting:after{
				content:" - ";
			}
			#center_Container{
				margin:auto;
				position:absolute;
				left:0;
				right:0;
				top:0;
				bottom:0;
				width:80%;
				height:60%;
				background:#7CFF7C;
				border-radius:2em;
				box-shadow:inset 0.5em 0.5em 0.5em #69d969,inset -0.5em -0.5em 0.5em #8fff8f;
			}
			#author{
				position:fixed;
				bottom:1em;
				margin:0 auto;
				width:100%;
				text-align:center;
				color:#1aa260;
				font-family:"impact";
				font-size:1.25em;
			}
			table{
				table-layout:fixed;
				width:100%;
				margin:2em;
				color:#555
			}
			table tr td{
				font-size:1.2em;
			}
		</style>
	</head>
	<body>
		<p id="Greeting"><%
			Dim greeting(4),h
			greeting(0)="Good Morning"
			greeting(1)="Good Afternoon"
			greeting(2)="Good Evening"
			greeting(3)="Good Night"
			h = hour(now())
			If h > 3 and h < 11 Then
				response.write(greeting(0))
			ElseIf h > 3 and h < 14 Then
				response.write(greeting(1))
			ElseIf h > 3 and h < 22 Then
				response.write(greeting(2))
			Else
				response.write(greeting(3))
			End If
		%></p>
		<p id="author">
			<%
				response.write("Copyright &copy; 2021 SeeChen All Right Reserved")
			%>
		</p>
		<div id="center_Container">
			<table>
				<tr>
					<td>Server IP address</td>
					<td><%
						Dim ipAddress
						ipAddress = Request.ServerVariables("LOCAL_ADDR")
						response.write(" : " & ipAddress)
					%></td>
				</tr>
				<tr>
					<td>Server IP address</td>
					<td><%
						Dim serverPort
						serverPort = Request.ServerVariables("SERVER_PORT")
						response.write(" : " & serverPort)
					%></td>
				</tr>
				<tr>
					<td>Server Software</td>
					<td><%
						Dim serverSoft
						serverSoft = Request.ServerVariables("SERVER_SOFTWARE")
						response.write(" : " & serverSoft)
					%></td>
				</tr>
				<tr>
					<td>Server Protocol</td>
					<td><%
						Dim serverProtocol
						serverProtocol = Request.ServerVariables("SERVER_PROTOCOL")
						response.write(" : " & serverProtocol)
					%></td>
				</tr>
				<tr>
					<td>Site Physical Path</td>
					<td><%
						Dim physicalPath
						physicalPath = request.ServerVariables("APPL_PHYSICAL_PATH")
						response.write(" : " & physicalPath)
					%></td>
				</tr>
				<tr>
					<td>DNS lookup of IP address</td>
					<td><%
						Dim remoteHost
						remoteHost = request.ServerVariables("remote_host")
						response.write(" : " & remoteHost)
					%></td>
				</tr>
				<tr>
					<td>The method used to call the page</td>
					<td><%
						Dim requestMethod
						requestMethod = request.ServerVariables("request_method")
						response.write(" : " & requestMethod)
					%></td>
				</tr>
				<tr>
					<td>File Last Modified</td>
					<td><%
						Set fs = Server.CreateObject("Scripting.FileSystemObject")
						Set rs = fs.GetFile(Server.MapPath("home.asp"))
						modified = rs.DateLastModified
						response.write(" : " & modified)
						Set rs = Nothing
						Set fs = Nothing
					%></td>
				</tr>
			<table>
		</div>
	</body>
</html>
