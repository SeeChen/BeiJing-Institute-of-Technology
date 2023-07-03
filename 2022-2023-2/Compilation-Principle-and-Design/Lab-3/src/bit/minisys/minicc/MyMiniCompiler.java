package bit.minisys.minicc;

import MyCGrammer.MyCGrammerLexer;
import MyCGrammer.MyCGrammerParser;
import bit.minisys.minicc.scanner.MyScanner;
import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTree;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
public class MyMiniCompiler {
    public static void main(String[] args)throws IOException {
        String inputFile = "E:\\Github\\SeeChen\\Compilation-Principle-and-Design\\Lab-3\\1.c";
        InputStream is = System.in;
        is = new FileInputStream(inputFile);
        ANTLRInputStream input = new ANTLRInputStream(is);
        MyCGrammerLexer lexer = new MyCGrammerLexer(input);
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        MyCGrammerParser parser = new MyCGrammerParser(tokens);
        ParseTree tree = parser.compilationUnit();

        String fName = inputFile.trim();
        String temp[] = fName.split("\\\\");
        String tokenFileName =temp[temp.length - 1] + ".tokens";
        MyScanner myScanner = new MyScanner(tokenFileName,tokens);
    }
}