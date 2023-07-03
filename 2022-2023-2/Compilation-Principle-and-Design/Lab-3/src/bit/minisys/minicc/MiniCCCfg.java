package bit.minisys.minicc;

import bit.minisys.minicc.icgen.internal.IRBuilder;

public class MiniCCCfg {
	
	public static String MINICC_PP_INPUT_EXT = ".c";
	public static String MINICC_PP_OUTPUT_EXT = ".pp.c";
	// input and output for MiniCCScanner
	public static String MINICC_SCANNER_INPUT_EXT = ".pp.c";
	public static String MINICC_SCANNER_OUTPUT_EXT = ".tokens";
	// input and output for MiniCCParser
	public static String MINICC_PARSER_INPUT_EXT = ".tokens";
	public static String MINICC_PARSER_OUTPUT_EXT = ".ast.json";
	// input and output for MiniCCSemantic
	public static String MINICC_SEMANTIC_INPUT_EXT = ".tree";//璇硶鏍�
	public static String MINICC_SEMANTIC_OUTPUT_EXT = ".tree2.xml";//璇箟妫�鏌�
	// input and output for MiniCCICGen
	public static String MINICC_ICGEN_INPUT_EXT = ".tree2.xml";//璇硶鏍�
	public static String MINICC_ICGEN_OUTPUT_EXT = ".ic.txt";//鐢熸垚鍥涘厓寮忓垪琛�
	// input and output for MiniCCOpt
	public static String MINICC_OPT_INPUT_EXT = ".ic.xml";//涓棿浠ｇ爜
	public static String MINICC_OPT_OUTPUT_EXT = ".ic2.xml";//瀹炴柦甯搁噺鍚堝苟绛変唬鐮佷紭鍖�
	// input and output for MiniCCCodeGen
	public static String MINICC_CODEGEN_INPUT_EXT = ".ic2.xml";//涓棿浠ｇ爜
	public static String MINICC_CODEGEN_OUTPUT_EXT = ".code.s";//鐢熸垚x86鎴栬�匨IPS姹囩紪浠ｇ爜
	// input and output for simulator
	public static String MINICC_ASSEMBLER_INPUT_EXT = ".code.s";//鐩爣浠ｇ爜
	
	//structure for config.xml
	public String type;
	public String path;
	public String skip;
	public String target;
	public String ra;
	public String headless;
}
