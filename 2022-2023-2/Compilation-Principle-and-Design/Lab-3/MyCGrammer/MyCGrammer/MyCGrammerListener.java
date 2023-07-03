// Generated from MyCGrammer.g4 by ANTLR 4.8
package MyCGrammer;
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link MyCGrammerParser}.
 */
public interface MyCGrammerListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#primaryExpression}.
	 * @param ctx the parse tree
	 */
	void enterPrimaryExpression(MyCGrammerParser.PrimaryExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#primaryExpression}.
	 * @param ctx the parse tree
	 */
	void exitPrimaryExpression(MyCGrammerParser.PrimaryExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#tokenId}.
	 * @param ctx the parse tree
	 */
	void enterTokenId(MyCGrammerParser.TokenIdContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#tokenId}.
	 * @param ctx the parse tree
	 */
	void exitTokenId(MyCGrammerParser.TokenIdContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#tokenConstant}.
	 * @param ctx the parse tree
	 */
	void enterTokenConstant(MyCGrammerParser.TokenConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#tokenConstant}.
	 * @param ctx the parse tree
	 */
	void exitTokenConstant(MyCGrammerParser.TokenConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#tokenStringLiteral}.
	 * @param ctx the parse tree
	 */
	void enterTokenStringLiteral(MyCGrammerParser.TokenStringLiteralContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#tokenStringLiteral}.
	 * @param ctx the parse tree
	 */
	void exitTokenStringLiteral(MyCGrammerParser.TokenStringLiteralContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#genericSelection}.
	 * @param ctx the parse tree
	 */
	void enterGenericSelection(MyCGrammerParser.GenericSelectionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#genericSelection}.
	 * @param ctx the parse tree
	 */
	void exitGenericSelection(MyCGrammerParser.GenericSelectionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#genericAssocList}.
	 * @param ctx the parse tree
	 */
	void enterGenericAssocList(MyCGrammerParser.GenericAssocListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#genericAssocList}.
	 * @param ctx the parse tree
	 */
	void exitGenericAssocList(MyCGrammerParser.GenericAssocListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#genericAssociation}.
	 * @param ctx the parse tree
	 */
	void enterGenericAssociation(MyCGrammerParser.GenericAssociationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#genericAssociation}.
	 * @param ctx the parse tree
	 */
	void exitGenericAssociation(MyCGrammerParser.GenericAssociationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code postfixExpression_arrayaccess}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void enterPostfixExpression_arrayaccess(MyCGrammerParser.PostfixExpression_arrayaccessContext ctx);
	/**
	 * Exit a parse tree produced by the {@code postfixExpression_arrayaccess}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void exitPostfixExpression_arrayaccess(MyCGrammerParser.PostfixExpression_arrayaccessContext ctx);
	/**
	 * Enter a parse tree produced by the {@code postfixExpression_point}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void enterPostfixExpression_point(MyCGrammerParser.PostfixExpression_pointContext ctx);
	/**
	 * Exit a parse tree produced by the {@code postfixExpression_point}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void exitPostfixExpression_point(MyCGrammerParser.PostfixExpression_pointContext ctx);
	/**
	 * Enter a parse tree produced by the {@code postfixExpression_funcall}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void enterPostfixExpression_funcall(MyCGrammerParser.PostfixExpression_funcallContext ctx);
	/**
	 * Exit a parse tree produced by the {@code postfixExpression_funcall}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void exitPostfixExpression_funcall(MyCGrammerParser.PostfixExpression_funcallContext ctx);
	/**
	 * Enter a parse tree produced by the {@code postfixExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void enterPostfixExpression_pass(MyCGrammerParser.PostfixExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code postfixExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void exitPostfixExpression_pass(MyCGrammerParser.PostfixExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code postfixExpression_member}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void enterPostfixExpression_member(MyCGrammerParser.PostfixExpression_memberContext ctx);
	/**
	 * Exit a parse tree produced by the {@code postfixExpression_member}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void exitPostfixExpression_member(MyCGrammerParser.PostfixExpression_memberContext ctx);
	/**
	 * Enter a parse tree produced by the {@code postfixExpression_}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void enterPostfixExpression_(MyCGrammerParser.PostfixExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code postfixExpression_}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 */
	void exitPostfixExpression_(MyCGrammerParser.PostfixExpression_Context ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#argumentExpressionList}.
	 * @param ctx the parse tree
	 */
	void enterArgumentExpressionList(MyCGrammerParser.ArgumentExpressionListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#argumentExpressionList}.
	 * @param ctx the parse tree
	 */
	void exitArgumentExpressionList(MyCGrammerParser.ArgumentExpressionListContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unaryExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#unaryExpression}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExpression_pass(MyCGrammerParser.UnaryExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code unaryExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#unaryExpression}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExpression_pass(MyCGrammerParser.UnaryExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code unaryExpression_}
	 * labeled alternative in {@link MyCGrammerParser#unaryExpression}.
	 * @param ctx the parse tree
	 */
	void enterUnaryExpression_(MyCGrammerParser.UnaryExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code unaryExpression_}
	 * labeled alternative in {@link MyCGrammerParser#unaryExpression}.
	 * @param ctx the parse tree
	 */
	void exitUnaryExpression_(MyCGrammerParser.UnaryExpression_Context ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#unaryOperator}.
	 * @param ctx the parse tree
	 */
	void enterUnaryOperator(MyCGrammerParser.UnaryOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#unaryOperator}.
	 * @param ctx the parse tree
	 */
	void exitUnaryOperator(MyCGrammerParser.UnaryOperatorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code castExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#castExpression}.
	 * @param ctx the parse tree
	 */
	void enterCastExpression_pass(MyCGrammerParser.CastExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code castExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#castExpression}.
	 * @param ctx the parse tree
	 */
	void exitCastExpression_pass(MyCGrammerParser.CastExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code castExpression_}
	 * labeled alternative in {@link MyCGrammerParser#castExpression}.
	 * @param ctx the parse tree
	 */
	void enterCastExpression_(MyCGrammerParser.CastExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code castExpression_}
	 * labeled alternative in {@link MyCGrammerParser#castExpression}.
	 * @param ctx the parse tree
	 */
	void exitCastExpression_(MyCGrammerParser.CastExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code multiplicativeExpression_}
	 * labeled alternative in {@link MyCGrammerParser#multiplicativeExpression}.
	 * @param ctx the parse tree
	 */
	void enterMultiplicativeExpression_(MyCGrammerParser.MultiplicativeExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code multiplicativeExpression_}
	 * labeled alternative in {@link MyCGrammerParser#multiplicativeExpression}.
	 * @param ctx the parse tree
	 */
	void exitMultiplicativeExpression_(MyCGrammerParser.MultiplicativeExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code multiplicativeExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#multiplicativeExpression}.
	 * @param ctx the parse tree
	 */
	void enterMultiplicativeExpression_pass(MyCGrammerParser.MultiplicativeExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code multiplicativeExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#multiplicativeExpression}.
	 * @param ctx the parse tree
	 */
	void exitMultiplicativeExpression_pass(MyCGrammerParser.MultiplicativeExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code additiveExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#additiveExpression}.
	 * @param ctx the parse tree
	 */
	void enterAdditiveExpression_pass(MyCGrammerParser.AdditiveExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code additiveExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#additiveExpression}.
	 * @param ctx the parse tree
	 */
	void exitAdditiveExpression_pass(MyCGrammerParser.AdditiveExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code additiveExpression_}
	 * labeled alternative in {@link MyCGrammerParser#additiveExpression}.
	 * @param ctx the parse tree
	 */
	void enterAdditiveExpression_(MyCGrammerParser.AdditiveExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code additiveExpression_}
	 * labeled alternative in {@link MyCGrammerParser#additiveExpression}.
	 * @param ctx the parse tree
	 */
	void exitAdditiveExpression_(MyCGrammerParser.AdditiveExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code shiftExpression_}
	 * labeled alternative in {@link MyCGrammerParser#shiftExpression}.
	 * @param ctx the parse tree
	 */
	void enterShiftExpression_(MyCGrammerParser.ShiftExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code shiftExpression_}
	 * labeled alternative in {@link MyCGrammerParser#shiftExpression}.
	 * @param ctx the parse tree
	 */
	void exitShiftExpression_(MyCGrammerParser.ShiftExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code shiftExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#shiftExpression}.
	 * @param ctx the parse tree
	 */
	void enterShiftExpression_pass(MyCGrammerParser.ShiftExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code shiftExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#shiftExpression}.
	 * @param ctx the parse tree
	 */
	void exitShiftExpression_pass(MyCGrammerParser.ShiftExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code relationalExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#relationalExpression}.
	 * @param ctx the parse tree
	 */
	void enterRelationalExpression_pass(MyCGrammerParser.RelationalExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code relationalExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#relationalExpression}.
	 * @param ctx the parse tree
	 */
	void exitRelationalExpression_pass(MyCGrammerParser.RelationalExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code relationalExpression_}
	 * labeled alternative in {@link MyCGrammerParser#relationalExpression}.
	 * @param ctx the parse tree
	 */
	void enterRelationalExpression_(MyCGrammerParser.RelationalExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code relationalExpression_}
	 * labeled alternative in {@link MyCGrammerParser#relationalExpression}.
	 * @param ctx the parse tree
	 */
	void exitRelationalExpression_(MyCGrammerParser.RelationalExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code equalityExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#equalityExpression}.
	 * @param ctx the parse tree
	 */
	void enterEqualityExpression_pass(MyCGrammerParser.EqualityExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code equalityExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#equalityExpression}.
	 * @param ctx the parse tree
	 */
	void exitEqualityExpression_pass(MyCGrammerParser.EqualityExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code equalityExpression_}
	 * labeled alternative in {@link MyCGrammerParser#equalityExpression}.
	 * @param ctx the parse tree
	 */
	void enterEqualityExpression_(MyCGrammerParser.EqualityExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code equalityExpression_}
	 * labeled alternative in {@link MyCGrammerParser#equalityExpression}.
	 * @param ctx the parse tree
	 */
	void exitEqualityExpression_(MyCGrammerParser.EqualityExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code andExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#andExpression}.
	 * @param ctx the parse tree
	 */
	void enterAndExpression_pass(MyCGrammerParser.AndExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code andExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#andExpression}.
	 * @param ctx the parse tree
	 */
	void exitAndExpression_pass(MyCGrammerParser.AndExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code andExpression_}
	 * labeled alternative in {@link MyCGrammerParser#andExpression}.
	 * @param ctx the parse tree
	 */
	void enterAndExpression_(MyCGrammerParser.AndExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code andExpression_}
	 * labeled alternative in {@link MyCGrammerParser#andExpression}.
	 * @param ctx the parse tree
	 */
	void exitAndExpression_(MyCGrammerParser.AndExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code exclusiveOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#exclusiveOrExpression}.
	 * @param ctx the parse tree
	 */
	void enterExclusiveOrExpression_(MyCGrammerParser.ExclusiveOrExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code exclusiveOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#exclusiveOrExpression}.
	 * @param ctx the parse tree
	 */
	void exitExclusiveOrExpression_(MyCGrammerParser.ExclusiveOrExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code exclusiveOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#exclusiveOrExpression}.
	 * @param ctx the parse tree
	 */
	void enterExclusiveOrExpression_pass(MyCGrammerParser.ExclusiveOrExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code exclusiveOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#exclusiveOrExpression}.
	 * @param ctx the parse tree
	 */
	void exitExclusiveOrExpression_pass(MyCGrammerParser.ExclusiveOrExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code inclusiveOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#inclusiveOrExpression}.
	 * @param ctx the parse tree
	 */
	void enterInclusiveOrExpression_pass(MyCGrammerParser.InclusiveOrExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code inclusiveOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#inclusiveOrExpression}.
	 * @param ctx the parse tree
	 */
	void exitInclusiveOrExpression_pass(MyCGrammerParser.InclusiveOrExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code inclusiveOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#inclusiveOrExpression}.
	 * @param ctx the parse tree
	 */
	void enterInclusiveOrExpression_(MyCGrammerParser.InclusiveOrExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code inclusiveOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#inclusiveOrExpression}.
	 * @param ctx the parse tree
	 */
	void exitInclusiveOrExpression_(MyCGrammerParser.InclusiveOrExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code logicalAndExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#logicalAndExpression}.
	 * @param ctx the parse tree
	 */
	void enterLogicalAndExpression_pass(MyCGrammerParser.LogicalAndExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code logicalAndExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#logicalAndExpression}.
	 * @param ctx the parse tree
	 */
	void exitLogicalAndExpression_pass(MyCGrammerParser.LogicalAndExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code logicalAndExpression_}
	 * labeled alternative in {@link MyCGrammerParser#logicalAndExpression}.
	 * @param ctx the parse tree
	 */
	void enterLogicalAndExpression_(MyCGrammerParser.LogicalAndExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code logicalAndExpression_}
	 * labeled alternative in {@link MyCGrammerParser#logicalAndExpression}.
	 * @param ctx the parse tree
	 */
	void exitLogicalAndExpression_(MyCGrammerParser.LogicalAndExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code logicalOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#logicalOrExpression}.
	 * @param ctx the parse tree
	 */
	void enterLogicalOrExpression_(MyCGrammerParser.LogicalOrExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code logicalOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#logicalOrExpression}.
	 * @param ctx the parse tree
	 */
	void exitLogicalOrExpression_(MyCGrammerParser.LogicalOrExpression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code logicalOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#logicalOrExpression}.
	 * @param ctx the parse tree
	 */
	void enterLogicalOrExpression_pass(MyCGrammerParser.LogicalOrExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code logicalOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#logicalOrExpression}.
	 * @param ctx the parse tree
	 */
	void exitLogicalOrExpression_pass(MyCGrammerParser.LogicalOrExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#conditionalExpression}.
	 * @param ctx the parse tree
	 */
	void enterConditionalExpression(MyCGrammerParser.ConditionalExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#conditionalExpression}.
	 * @param ctx the parse tree
	 */
	void exitConditionalExpression(MyCGrammerParser.ConditionalExpressionContext ctx);
	/**
	 * Enter a parse tree produced by the {@code assignmentExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#assignmentExpression}.
	 * @param ctx the parse tree
	 */
	void enterAssignmentExpression_pass(MyCGrammerParser.AssignmentExpression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code assignmentExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#assignmentExpression}.
	 * @param ctx the parse tree
	 */
	void exitAssignmentExpression_pass(MyCGrammerParser.AssignmentExpression_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code assignmentExpression_}
	 * labeled alternative in {@link MyCGrammerParser#assignmentExpression}.
	 * @param ctx the parse tree
	 */
	void enterAssignmentExpression_(MyCGrammerParser.AssignmentExpression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code assignmentExpression_}
	 * labeled alternative in {@link MyCGrammerParser#assignmentExpression}.
	 * @param ctx the parse tree
	 */
	void exitAssignmentExpression_(MyCGrammerParser.AssignmentExpression_Context ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#assignmentOperator}.
	 * @param ctx the parse tree
	 */
	void enterAssignmentOperator(MyCGrammerParser.AssignmentOperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#assignmentOperator}.
	 * @param ctx the parse tree
	 */
	void exitAssignmentOperator(MyCGrammerParser.AssignmentOperatorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code expression_}
	 * labeled alternative in {@link MyCGrammerParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression_(MyCGrammerParser.Expression_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code expression_}
	 * labeled alternative in {@link MyCGrammerParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression_(MyCGrammerParser.Expression_Context ctx);
	/**
	 * Enter a parse tree produced by the {@code expression_pass}
	 * labeled alternative in {@link MyCGrammerParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression_pass(MyCGrammerParser.Expression_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code expression_pass}
	 * labeled alternative in {@link MyCGrammerParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression_pass(MyCGrammerParser.Expression_passContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#constantExpression}.
	 * @param ctx the parse tree
	 */
	void enterConstantExpression(MyCGrammerParser.ConstantExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#constantExpression}.
	 * @param ctx the parse tree
	 */
	void exitConstantExpression(MyCGrammerParser.ConstantExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(MyCGrammerParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(MyCGrammerParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#declarationSpecifiers}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationSpecifiers(MyCGrammerParser.DeclarationSpecifiersContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#declarationSpecifiers}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationSpecifiers(MyCGrammerParser.DeclarationSpecifiersContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#declarationSpecifiers2}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationSpecifiers2(MyCGrammerParser.DeclarationSpecifiers2Context ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#declarationSpecifiers2}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationSpecifiers2(MyCGrammerParser.DeclarationSpecifiers2Context ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#declarationSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationSpecifier(MyCGrammerParser.DeclarationSpecifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#declarationSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationSpecifier(MyCGrammerParser.DeclarationSpecifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#initDeclaratorList}.
	 * @param ctx the parse tree
	 */
	void enterInitDeclaratorList(MyCGrammerParser.InitDeclaratorListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#initDeclaratorList}.
	 * @param ctx the parse tree
	 */
	void exitInitDeclaratorList(MyCGrammerParser.InitDeclaratorListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#initDeclarator}.
	 * @param ctx the parse tree
	 */
	void enterInitDeclarator(MyCGrammerParser.InitDeclaratorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#initDeclarator}.
	 * @param ctx the parse tree
	 */
	void exitInitDeclarator(MyCGrammerParser.InitDeclaratorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#storageClassSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterStorageClassSpecifier(MyCGrammerParser.StorageClassSpecifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#storageClassSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitStorageClassSpecifier(MyCGrammerParser.StorageClassSpecifierContext ctx);
	/**
	 * Enter a parse tree produced by the {@code typeSpecifier_}
	 * labeled alternative in {@link MyCGrammerParser#typeSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterTypeSpecifier_(MyCGrammerParser.TypeSpecifier_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code typeSpecifier_}
	 * labeled alternative in {@link MyCGrammerParser#typeSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitTypeSpecifier_(MyCGrammerParser.TypeSpecifier_Context ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#structOrUnionSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterStructOrUnionSpecifier(MyCGrammerParser.StructOrUnionSpecifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#structOrUnionSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitStructOrUnionSpecifier(MyCGrammerParser.StructOrUnionSpecifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#structOrUnion}.
	 * @param ctx the parse tree
	 */
	void enterStructOrUnion(MyCGrammerParser.StructOrUnionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#structOrUnion}.
	 * @param ctx the parse tree
	 */
	void exitStructOrUnion(MyCGrammerParser.StructOrUnionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#structDeclarationList}.
	 * @param ctx the parse tree
	 */
	void enterStructDeclarationList(MyCGrammerParser.StructDeclarationListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#structDeclarationList}.
	 * @param ctx the parse tree
	 */
	void exitStructDeclarationList(MyCGrammerParser.StructDeclarationListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#structDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterStructDeclaration(MyCGrammerParser.StructDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#structDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitStructDeclaration(MyCGrammerParser.StructDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#specifierQualifierList}.
	 * @param ctx the parse tree
	 */
	void enterSpecifierQualifierList(MyCGrammerParser.SpecifierQualifierListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#specifierQualifierList}.
	 * @param ctx the parse tree
	 */
	void exitSpecifierQualifierList(MyCGrammerParser.SpecifierQualifierListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#structDeclaratorList}.
	 * @param ctx the parse tree
	 */
	void enterStructDeclaratorList(MyCGrammerParser.StructDeclaratorListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#structDeclaratorList}.
	 * @param ctx the parse tree
	 */
	void exitStructDeclaratorList(MyCGrammerParser.StructDeclaratorListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#structDeclarator}.
	 * @param ctx the parse tree
	 */
	void enterStructDeclarator(MyCGrammerParser.StructDeclaratorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#structDeclarator}.
	 * @param ctx the parse tree
	 */
	void exitStructDeclarator(MyCGrammerParser.StructDeclaratorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#enumSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterEnumSpecifier(MyCGrammerParser.EnumSpecifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#enumSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitEnumSpecifier(MyCGrammerParser.EnumSpecifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#enumeratorList}.
	 * @param ctx the parse tree
	 */
	void enterEnumeratorList(MyCGrammerParser.EnumeratorListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#enumeratorList}.
	 * @param ctx the parse tree
	 */
	void exitEnumeratorList(MyCGrammerParser.EnumeratorListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#enumerator}.
	 * @param ctx the parse tree
	 */
	void enterEnumerator(MyCGrammerParser.EnumeratorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#enumerator}.
	 * @param ctx the parse tree
	 */
	void exitEnumerator(MyCGrammerParser.EnumeratorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#enumerationConstant}.
	 * @param ctx the parse tree
	 */
	void enterEnumerationConstant(MyCGrammerParser.EnumerationConstantContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#enumerationConstant}.
	 * @param ctx the parse tree
	 */
	void exitEnumerationConstant(MyCGrammerParser.EnumerationConstantContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#atomicTypeSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterAtomicTypeSpecifier(MyCGrammerParser.AtomicTypeSpecifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#atomicTypeSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitAtomicTypeSpecifier(MyCGrammerParser.AtomicTypeSpecifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#typeQualifier}.
	 * @param ctx the parse tree
	 */
	void enterTypeQualifier(MyCGrammerParser.TypeQualifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#typeQualifier}.
	 * @param ctx the parse tree
	 */
	void exitTypeQualifier(MyCGrammerParser.TypeQualifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#functionSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterFunctionSpecifier(MyCGrammerParser.FunctionSpecifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#functionSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitFunctionSpecifier(MyCGrammerParser.FunctionSpecifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#alignmentSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterAlignmentSpecifier(MyCGrammerParser.AlignmentSpecifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#alignmentSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitAlignmentSpecifier(MyCGrammerParser.AlignmentSpecifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#declarator}.
	 * @param ctx the parse tree
	 */
	void enterDeclarator(MyCGrammerParser.DeclaratorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#declarator}.
	 * @param ctx the parse tree
	 */
	void exitDeclarator(MyCGrammerParser.DeclaratorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code directDeclarator_array}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 */
	void enterDirectDeclarator_array(MyCGrammerParser.DirectDeclarator_arrayContext ctx);
	/**
	 * Exit a parse tree produced by the {@code directDeclarator_array}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 */
	void exitDirectDeclarator_array(MyCGrammerParser.DirectDeclarator_arrayContext ctx);
	/**
	 * Enter a parse tree produced by the {@code directDeclarator_pass}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 */
	void enterDirectDeclarator_pass(MyCGrammerParser.DirectDeclarator_passContext ctx);
	/**
	 * Exit a parse tree produced by the {@code directDeclarator_pass}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 */
	void exitDirectDeclarator_pass(MyCGrammerParser.DirectDeclarator_passContext ctx);
	/**
	 * Enter a parse tree produced by the {@code directDeclarator_func}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 */
	void enterDirectDeclarator_func(MyCGrammerParser.DirectDeclarator_funcContext ctx);
	/**
	 * Exit a parse tree produced by the {@code directDeclarator_func}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 */
	void exitDirectDeclarator_func(MyCGrammerParser.DirectDeclarator_funcContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#gccDeclaratorExtension}.
	 * @param ctx the parse tree
	 */
	void enterGccDeclaratorExtension(MyCGrammerParser.GccDeclaratorExtensionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#gccDeclaratorExtension}.
	 * @param ctx the parse tree
	 */
	void exitGccDeclaratorExtension(MyCGrammerParser.GccDeclaratorExtensionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#gccAttributeSpecifier}.
	 * @param ctx the parse tree
	 */
	void enterGccAttributeSpecifier(MyCGrammerParser.GccAttributeSpecifierContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#gccAttributeSpecifier}.
	 * @param ctx the parse tree
	 */
	void exitGccAttributeSpecifier(MyCGrammerParser.GccAttributeSpecifierContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#gccAttributeList}.
	 * @param ctx the parse tree
	 */
	void enterGccAttributeList(MyCGrammerParser.GccAttributeListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#gccAttributeList}.
	 * @param ctx the parse tree
	 */
	void exitGccAttributeList(MyCGrammerParser.GccAttributeListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#gccAttribute}.
	 * @param ctx the parse tree
	 */
	void enterGccAttribute(MyCGrammerParser.GccAttributeContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#gccAttribute}.
	 * @param ctx the parse tree
	 */
	void exitGccAttribute(MyCGrammerParser.GccAttributeContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#nestedParenthesesBlock}.
	 * @param ctx the parse tree
	 */
	void enterNestedParenthesesBlock(MyCGrammerParser.NestedParenthesesBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#nestedParenthesesBlock}.
	 * @param ctx the parse tree
	 */
	void exitNestedParenthesesBlock(MyCGrammerParser.NestedParenthesesBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#pointer}.
	 * @param ctx the parse tree
	 */
	void enterPointer(MyCGrammerParser.PointerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#pointer}.
	 * @param ctx the parse tree
	 */
	void exitPointer(MyCGrammerParser.PointerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#typeQualifierList}.
	 * @param ctx the parse tree
	 */
	void enterTypeQualifierList(MyCGrammerParser.TypeQualifierListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#typeQualifierList}.
	 * @param ctx the parse tree
	 */
	void exitTypeQualifierList(MyCGrammerParser.TypeQualifierListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#parameterTypeList}.
	 * @param ctx the parse tree
	 */
	void enterParameterTypeList(MyCGrammerParser.ParameterTypeListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#parameterTypeList}.
	 * @param ctx the parse tree
	 */
	void exitParameterTypeList(MyCGrammerParser.ParameterTypeListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void enterParameterList(MyCGrammerParser.ParameterListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#parameterList}.
	 * @param ctx the parse tree
	 */
	void exitParameterList(MyCGrammerParser.ParameterListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#parameterDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterParameterDeclaration(MyCGrammerParser.ParameterDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#parameterDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitParameterDeclaration(MyCGrammerParser.ParameterDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#identifierList}.
	 * @param ctx the parse tree
	 */
	void enterIdentifierList(MyCGrammerParser.IdentifierListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#identifierList}.
	 * @param ctx the parse tree
	 */
	void exitIdentifierList(MyCGrammerParser.IdentifierListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#typeName}.
	 * @param ctx the parse tree
	 */
	void enterTypeName(MyCGrammerParser.TypeNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#typeName}.
	 * @param ctx the parse tree
	 */
	void exitTypeName(MyCGrammerParser.TypeNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#abstractDeclarator}.
	 * @param ctx the parse tree
	 */
	void enterAbstractDeclarator(MyCGrammerParser.AbstractDeclaratorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#abstractDeclarator}.
	 * @param ctx the parse tree
	 */
	void exitAbstractDeclarator(MyCGrammerParser.AbstractDeclaratorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#directAbstractDeclarator}.
	 * @param ctx the parse tree
	 */
	void enterDirectAbstractDeclarator(MyCGrammerParser.DirectAbstractDeclaratorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#directAbstractDeclarator}.
	 * @param ctx the parse tree
	 */
	void exitDirectAbstractDeclarator(MyCGrammerParser.DirectAbstractDeclaratorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#initializer}.
	 * @param ctx the parse tree
	 */
	void enterInitializer(MyCGrammerParser.InitializerContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#initializer}.
	 * @param ctx the parse tree
	 */
	void exitInitializer(MyCGrammerParser.InitializerContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#initializerList}.
	 * @param ctx the parse tree
	 */
	void enterInitializerList(MyCGrammerParser.InitializerListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#initializerList}.
	 * @param ctx the parse tree
	 */
	void exitInitializerList(MyCGrammerParser.InitializerListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#designation}.
	 * @param ctx the parse tree
	 */
	void enterDesignation(MyCGrammerParser.DesignationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#designation}.
	 * @param ctx the parse tree
	 */
	void exitDesignation(MyCGrammerParser.DesignationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#designatorList}.
	 * @param ctx the parse tree
	 */
	void enterDesignatorList(MyCGrammerParser.DesignatorListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#designatorList}.
	 * @param ctx the parse tree
	 */
	void exitDesignatorList(MyCGrammerParser.DesignatorListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#designator}.
	 * @param ctx the parse tree
	 */
	void enterDesignator(MyCGrammerParser.DesignatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#designator}.
	 * @param ctx the parse tree
	 */
	void exitDesignator(MyCGrammerParser.DesignatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#staticAssertDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterStaticAssertDeclaration(MyCGrammerParser.StaticAssertDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#staticAssertDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitStaticAssertDeclaration(MyCGrammerParser.StaticAssertDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStatement(MyCGrammerParser.StatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStatement(MyCGrammerParser.StatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#labeledStatement}.
	 * @param ctx the parse tree
	 */
	void enterLabeledStatement(MyCGrammerParser.LabeledStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#labeledStatement}.
	 * @param ctx the parse tree
	 */
	void exitLabeledStatement(MyCGrammerParser.LabeledStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#compoundStatement}.
	 * @param ctx the parse tree
	 */
	void enterCompoundStatement(MyCGrammerParser.CompoundStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#compoundStatement}.
	 * @param ctx the parse tree
	 */
	void exitCompoundStatement(MyCGrammerParser.CompoundStatementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#blockItemList}.
	 * @param ctx the parse tree
	 */
	void enterBlockItemList(MyCGrammerParser.BlockItemListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#blockItemList}.
	 * @param ctx the parse tree
	 */
	void exitBlockItemList(MyCGrammerParser.BlockItemListContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#blockItem}.
	 * @param ctx the parse tree
	 */
	void enterBlockItem(MyCGrammerParser.BlockItemContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#blockItem}.
	 * @param ctx the parse tree
	 */
	void exitBlockItem(MyCGrammerParser.BlockItemContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void enterExpressionStatement(MyCGrammerParser.ExpressionStatementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#expressionStatement}.
	 * @param ctx the parse tree
	 */
	void exitExpressionStatement(MyCGrammerParser.ExpressionStatementContext ctx);
	/**
	 * Enter a parse tree produced by the {@code selectionStatement_if}
	 * labeled alternative in {@link MyCGrammerParser#selectionStatement}.
	 * @param ctx the parse tree
	 */
	void enterSelectionStatement_if(MyCGrammerParser.SelectionStatement_ifContext ctx);
	/**
	 * Exit a parse tree produced by the {@code selectionStatement_if}
	 * labeled alternative in {@link MyCGrammerParser#selectionStatement}.
	 * @param ctx the parse tree
	 */
	void exitSelectionStatement_if(MyCGrammerParser.SelectionStatement_ifContext ctx);
	/**
	 * Enter a parse tree produced by the {@code selectionStatement_switch}
	 * labeled alternative in {@link MyCGrammerParser#selectionStatement}.
	 * @param ctx the parse tree
	 */
	void enterSelectionStatement_switch(MyCGrammerParser.SelectionStatement_switchContext ctx);
	/**
	 * Exit a parse tree produced by the {@code selectionStatement_switch}
	 * labeled alternative in {@link MyCGrammerParser#selectionStatement}.
	 * @param ctx the parse tree
	 */
	void exitSelectionStatement_switch(MyCGrammerParser.SelectionStatement_switchContext ctx);
	/**
	 * Enter a parse tree produced by the {@code iterationStatement_while}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 */
	void enterIterationStatement_while(MyCGrammerParser.IterationStatement_whileContext ctx);
	/**
	 * Exit a parse tree produced by the {@code iterationStatement_while}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 */
	void exitIterationStatement_while(MyCGrammerParser.IterationStatement_whileContext ctx);
	/**
	 * Enter a parse tree produced by the {@code iterationStatement_dowhile}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 */
	void enterIterationStatement_dowhile(MyCGrammerParser.IterationStatement_dowhileContext ctx);
	/**
	 * Exit a parse tree produced by the {@code iterationStatement_dowhile}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 */
	void exitIterationStatement_dowhile(MyCGrammerParser.IterationStatement_dowhileContext ctx);
	/**
	 * Enter a parse tree produced by the {@code iterationStatement_for}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 */
	void enterIterationStatement_for(MyCGrammerParser.IterationStatement_forContext ctx);
	/**
	 * Exit a parse tree produced by the {@code iterationStatement_for}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 */
	void exitIterationStatement_for(MyCGrammerParser.IterationStatement_forContext ctx);
	/**
	 * Enter a parse tree produced by the {@code iterationStatement_forDeclared}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 */
	void enterIterationStatement_forDeclared(MyCGrammerParser.IterationStatement_forDeclaredContext ctx);
	/**
	 * Exit a parse tree produced by the {@code iterationStatement_forDeclared}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 */
	void exitIterationStatement_forDeclared(MyCGrammerParser.IterationStatement_forDeclaredContext ctx);
	/**
	 * Enter a parse tree produced by the {@code jumpStatement_goto}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void enterJumpStatement_goto(MyCGrammerParser.JumpStatement_gotoContext ctx);
	/**
	 * Exit a parse tree produced by the {@code jumpStatement_goto}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void exitJumpStatement_goto(MyCGrammerParser.JumpStatement_gotoContext ctx);
	/**
	 * Enter a parse tree produced by the {@code jumpStatement_continue}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void enterJumpStatement_continue(MyCGrammerParser.JumpStatement_continueContext ctx);
	/**
	 * Exit a parse tree produced by the {@code jumpStatement_continue}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void exitJumpStatement_continue(MyCGrammerParser.JumpStatement_continueContext ctx);
	/**
	 * Enter a parse tree produced by the {@code jumpStatement_break}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void enterJumpStatement_break(MyCGrammerParser.JumpStatement_breakContext ctx);
	/**
	 * Exit a parse tree produced by the {@code jumpStatement_break}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void exitJumpStatement_break(MyCGrammerParser.JumpStatement_breakContext ctx);
	/**
	 * Enter a parse tree produced by the {@code jumpStatement_return}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void enterJumpStatement_return(MyCGrammerParser.JumpStatement_returnContext ctx);
	/**
	 * Exit a parse tree produced by the {@code jumpStatement_return}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void exitJumpStatement_return(MyCGrammerParser.JumpStatement_returnContext ctx);
	/**
	 * Enter a parse tree produced by the {@code jumpStatement_}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void enterJumpStatement_(MyCGrammerParser.JumpStatement_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code jumpStatement_}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 */
	void exitJumpStatement_(MyCGrammerParser.JumpStatement_Context ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#compilationUnit}.
	 * @param ctx the parse tree
	 */
	void enterCompilationUnit(MyCGrammerParser.CompilationUnitContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#compilationUnit}.
	 * @param ctx the parse tree
	 */
	void exitCompilationUnit(MyCGrammerParser.CompilationUnitContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#translationUnit}.
	 * @param ctx the parse tree
	 */
	void enterTranslationUnit(MyCGrammerParser.TranslationUnitContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#translationUnit}.
	 * @param ctx the parse tree
	 */
	void exitTranslationUnit(MyCGrammerParser.TranslationUnitContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#externalDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterExternalDeclaration(MyCGrammerParser.ExternalDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#externalDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitExternalDeclaration(MyCGrammerParser.ExternalDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#functionDefinition}.
	 * @param ctx the parse tree
	 */
	void enterFunctionDefinition(MyCGrammerParser.FunctionDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#functionDefinition}.
	 * @param ctx the parse tree
	 */
	void exitFunctionDefinition(MyCGrammerParser.FunctionDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MyCGrammerParser#declarationList}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationList(MyCGrammerParser.DeclarationListContext ctx);
	/**
	 * Exit a parse tree produced by {@link MyCGrammerParser#declarationList}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationList(MyCGrammerParser.DeclarationListContext ctx);
	/**
	 * Enter a parse tree produced by the {@code functionCall_}
	 * labeled alternative in {@link MyCGrammerParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void enterFunctionCall_(MyCGrammerParser.FunctionCall_Context ctx);
	/**
	 * Exit a parse tree produced by the {@code functionCall_}
	 * labeled alternative in {@link MyCGrammerParser#functionCall}.
	 * @param ctx the parse tree
	 */
	void exitFunctionCall_(MyCGrammerParser.FunctionCall_Context ctx);
}