// Generated from MyCGrammer.g4 by ANTLR 4.8
package MyCGrammer;
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link MyCGrammerParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface MyCGrammerVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#primaryExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPrimaryExpression(MyCGrammerParser.PrimaryExpressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#tokenId}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTokenId(MyCGrammerParser.TokenIdContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#tokenConstant}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTokenConstant(MyCGrammerParser.TokenConstantContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#tokenStringLiteral}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTokenStringLiteral(MyCGrammerParser.TokenStringLiteralContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#genericSelection}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGenericSelection(MyCGrammerParser.GenericSelectionContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#genericAssocList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGenericAssocList(MyCGrammerParser.GenericAssocListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#genericAssociation}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGenericAssociation(MyCGrammerParser.GenericAssociationContext ctx);
	/**
	 * Visit a parse tree produced by the {@code postfixExpression_arrayaccess}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPostfixExpression_arrayaccess(MyCGrammerParser.PostfixExpression_arrayaccessContext ctx);
	/**
	 * Visit a parse tree produced by the {@code postfixExpression_point}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPostfixExpression_point(MyCGrammerParser.PostfixExpression_pointContext ctx);
	/**
	 * Visit a parse tree produced by the {@code postfixExpression_funcall}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPostfixExpression_funcall(MyCGrammerParser.PostfixExpression_funcallContext ctx);
	/**
	 * Visit a parse tree produced by the {@code postfixExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPostfixExpression_pass(MyCGrammerParser.PostfixExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code postfixExpression_member}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPostfixExpression_member(MyCGrammerParser.PostfixExpression_memberContext ctx);
	/**
	 * Visit a parse tree produced by the {@code postfixExpression_}
	 * labeled alternative in {@link MyCGrammerParser#postfixExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPostfixExpression_(MyCGrammerParser.PostfixExpression_Context ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#argumentExpressionList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitArgumentExpressionList(MyCGrammerParser.ArgumentExpressionListContext ctx);
	/**
	 * Visit a parse tree produced by the {@code unaryExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#unaryExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitUnaryExpression_pass(MyCGrammerParser.UnaryExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code unaryExpression_}
	 * labeled alternative in {@link MyCGrammerParser#unaryExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitUnaryExpression_(MyCGrammerParser.UnaryExpression_Context ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#unaryOperator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitUnaryOperator(MyCGrammerParser.UnaryOperatorContext ctx);
	/**
	 * Visit a parse tree produced by the {@code castExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#castExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCastExpression_pass(MyCGrammerParser.CastExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code castExpression_}
	 * labeled alternative in {@link MyCGrammerParser#castExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCastExpression_(MyCGrammerParser.CastExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code multiplicativeExpression_}
	 * labeled alternative in {@link MyCGrammerParser#multiplicativeExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMultiplicativeExpression_(MyCGrammerParser.MultiplicativeExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code multiplicativeExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#multiplicativeExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMultiplicativeExpression_pass(MyCGrammerParser.MultiplicativeExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code additiveExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#additiveExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAdditiveExpression_pass(MyCGrammerParser.AdditiveExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code additiveExpression_}
	 * labeled alternative in {@link MyCGrammerParser#additiveExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAdditiveExpression_(MyCGrammerParser.AdditiveExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code shiftExpression_}
	 * labeled alternative in {@link MyCGrammerParser#shiftExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitShiftExpression_(MyCGrammerParser.ShiftExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code shiftExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#shiftExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitShiftExpression_pass(MyCGrammerParser.ShiftExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code relationalExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#relationalExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRelationalExpression_pass(MyCGrammerParser.RelationalExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code relationalExpression_}
	 * labeled alternative in {@link MyCGrammerParser#relationalExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRelationalExpression_(MyCGrammerParser.RelationalExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code equalityExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#equalityExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEqualityExpression_pass(MyCGrammerParser.EqualityExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code equalityExpression_}
	 * labeled alternative in {@link MyCGrammerParser#equalityExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEqualityExpression_(MyCGrammerParser.EqualityExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code andExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#andExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAndExpression_pass(MyCGrammerParser.AndExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code andExpression_}
	 * labeled alternative in {@link MyCGrammerParser#andExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAndExpression_(MyCGrammerParser.AndExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code exclusiveOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#exclusiveOrExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExclusiveOrExpression_(MyCGrammerParser.ExclusiveOrExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code exclusiveOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#exclusiveOrExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExclusiveOrExpression_pass(MyCGrammerParser.ExclusiveOrExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code inclusiveOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#inclusiveOrExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInclusiveOrExpression_pass(MyCGrammerParser.InclusiveOrExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code inclusiveOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#inclusiveOrExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInclusiveOrExpression_(MyCGrammerParser.InclusiveOrExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code logicalAndExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#logicalAndExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicalAndExpression_pass(MyCGrammerParser.LogicalAndExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code logicalAndExpression_}
	 * labeled alternative in {@link MyCGrammerParser#logicalAndExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicalAndExpression_(MyCGrammerParser.LogicalAndExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code logicalOrExpression_}
	 * labeled alternative in {@link MyCGrammerParser#logicalOrExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicalOrExpression_(MyCGrammerParser.LogicalOrExpression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code logicalOrExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#logicalOrExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLogicalOrExpression_pass(MyCGrammerParser.LogicalOrExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#conditionalExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitConditionalExpression(MyCGrammerParser.ConditionalExpressionContext ctx);
	/**
	 * Visit a parse tree produced by the {@code assignmentExpression_pass}
	 * labeled alternative in {@link MyCGrammerParser#assignmentExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignmentExpression_pass(MyCGrammerParser.AssignmentExpression_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code assignmentExpression_}
	 * labeled alternative in {@link MyCGrammerParser#assignmentExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignmentExpression_(MyCGrammerParser.AssignmentExpression_Context ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#assignmentOperator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAssignmentOperator(MyCGrammerParser.AssignmentOperatorContext ctx);
	/**
	 * Visit a parse tree produced by the {@code expression_}
	 * labeled alternative in {@link MyCGrammerParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpression_(MyCGrammerParser.Expression_Context ctx);
	/**
	 * Visit a parse tree produced by the {@code expression_pass}
	 * labeled alternative in {@link MyCGrammerParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpression_pass(MyCGrammerParser.Expression_passContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#constantExpression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitConstantExpression(MyCGrammerParser.ConstantExpressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#declaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDeclaration(MyCGrammerParser.DeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#declarationSpecifiers}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDeclarationSpecifiers(MyCGrammerParser.DeclarationSpecifiersContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#declarationSpecifiers2}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDeclarationSpecifiers2(MyCGrammerParser.DeclarationSpecifiers2Context ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#declarationSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDeclarationSpecifier(MyCGrammerParser.DeclarationSpecifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#initDeclaratorList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInitDeclaratorList(MyCGrammerParser.InitDeclaratorListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#initDeclarator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInitDeclarator(MyCGrammerParser.InitDeclaratorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#storageClassSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStorageClassSpecifier(MyCGrammerParser.StorageClassSpecifierContext ctx);
	/**
	 * Visit a parse tree produced by the {@code typeSpecifier_}
	 * labeled alternative in {@link MyCGrammerParser#typeSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTypeSpecifier_(MyCGrammerParser.TypeSpecifier_Context ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#structOrUnionSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStructOrUnionSpecifier(MyCGrammerParser.StructOrUnionSpecifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#structOrUnion}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStructOrUnion(MyCGrammerParser.StructOrUnionContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#structDeclarationList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStructDeclarationList(MyCGrammerParser.StructDeclarationListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#structDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStructDeclaration(MyCGrammerParser.StructDeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#specifierQualifierList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSpecifierQualifierList(MyCGrammerParser.SpecifierQualifierListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#structDeclaratorList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStructDeclaratorList(MyCGrammerParser.StructDeclaratorListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#structDeclarator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStructDeclarator(MyCGrammerParser.StructDeclaratorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#enumSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEnumSpecifier(MyCGrammerParser.EnumSpecifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#enumeratorList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEnumeratorList(MyCGrammerParser.EnumeratorListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#enumerator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEnumerator(MyCGrammerParser.EnumeratorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#enumerationConstant}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitEnumerationConstant(MyCGrammerParser.EnumerationConstantContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#atomicTypeSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAtomicTypeSpecifier(MyCGrammerParser.AtomicTypeSpecifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#typeQualifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTypeQualifier(MyCGrammerParser.TypeQualifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#functionSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionSpecifier(MyCGrammerParser.FunctionSpecifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#alignmentSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAlignmentSpecifier(MyCGrammerParser.AlignmentSpecifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#declarator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDeclarator(MyCGrammerParser.DeclaratorContext ctx);
	/**
	 * Visit a parse tree produced by the {@code directDeclarator_array}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDirectDeclarator_array(MyCGrammerParser.DirectDeclarator_arrayContext ctx);
	/**
	 * Visit a parse tree produced by the {@code directDeclarator_pass}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDirectDeclarator_pass(MyCGrammerParser.DirectDeclarator_passContext ctx);
	/**
	 * Visit a parse tree produced by the {@code directDeclarator_func}
	 * labeled alternative in {@link MyCGrammerParser#directDeclarator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDirectDeclarator_func(MyCGrammerParser.DirectDeclarator_funcContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#gccDeclaratorExtension}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGccDeclaratorExtension(MyCGrammerParser.GccDeclaratorExtensionContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#gccAttributeSpecifier}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGccAttributeSpecifier(MyCGrammerParser.GccAttributeSpecifierContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#gccAttributeList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGccAttributeList(MyCGrammerParser.GccAttributeListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#gccAttribute}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitGccAttribute(MyCGrammerParser.GccAttributeContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#nestedParenthesesBlock}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNestedParenthesesBlock(MyCGrammerParser.NestedParenthesesBlockContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#pointer}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitPointer(MyCGrammerParser.PointerContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#typeQualifierList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTypeQualifierList(MyCGrammerParser.TypeQualifierListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#parameterTypeList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParameterTypeList(MyCGrammerParser.ParameterTypeListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#parameterList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParameterList(MyCGrammerParser.ParameterListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#parameterDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitParameterDeclaration(MyCGrammerParser.ParameterDeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#identifierList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIdentifierList(MyCGrammerParser.IdentifierListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#typeName}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTypeName(MyCGrammerParser.TypeNameContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#abstractDeclarator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAbstractDeclarator(MyCGrammerParser.AbstractDeclaratorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#directAbstractDeclarator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDirectAbstractDeclarator(MyCGrammerParser.DirectAbstractDeclaratorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#initializer}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInitializer(MyCGrammerParser.InitializerContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#initializerList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInitializerList(MyCGrammerParser.InitializerListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#designation}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDesignation(MyCGrammerParser.DesignationContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#designatorList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDesignatorList(MyCGrammerParser.DesignatorListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#designator}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDesignator(MyCGrammerParser.DesignatorContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#staticAssertDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStaticAssertDeclaration(MyCGrammerParser.StaticAssertDeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#statement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitStatement(MyCGrammerParser.StatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#labeledStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitLabeledStatement(MyCGrammerParser.LabeledStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#compoundStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCompoundStatement(MyCGrammerParser.CompoundStatementContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#blockItemList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlockItemList(MyCGrammerParser.BlockItemListContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#blockItem}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitBlockItem(MyCGrammerParser.BlockItemContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#expressionStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExpressionStatement(MyCGrammerParser.ExpressionStatementContext ctx);
	/**
	 * Visit a parse tree produced by the {@code selectionStatement_if}
	 * labeled alternative in {@link MyCGrammerParser#selectionStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSelectionStatement_if(MyCGrammerParser.SelectionStatement_ifContext ctx);
	/**
	 * Visit a parse tree produced by the {@code selectionStatement_switch}
	 * labeled alternative in {@link MyCGrammerParser#selectionStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitSelectionStatement_switch(MyCGrammerParser.SelectionStatement_switchContext ctx);
	/**
	 * Visit a parse tree produced by the {@code iterationStatement_while}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIterationStatement_while(MyCGrammerParser.IterationStatement_whileContext ctx);
	/**
	 * Visit a parse tree produced by the {@code iterationStatement_dowhile}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIterationStatement_dowhile(MyCGrammerParser.IterationStatement_dowhileContext ctx);
	/**
	 * Visit a parse tree produced by the {@code iterationStatement_for}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIterationStatement_for(MyCGrammerParser.IterationStatement_forContext ctx);
	/**
	 * Visit a parse tree produced by the {@code iterationStatement_forDeclared}
	 * labeled alternative in {@link MyCGrammerParser#iterationStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitIterationStatement_forDeclared(MyCGrammerParser.IterationStatement_forDeclaredContext ctx);
	/**
	 * Visit a parse tree produced by the {@code jumpStatement_goto}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJumpStatement_goto(MyCGrammerParser.JumpStatement_gotoContext ctx);
	/**
	 * Visit a parse tree produced by the {@code jumpStatement_continue}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJumpStatement_continue(MyCGrammerParser.JumpStatement_continueContext ctx);
	/**
	 * Visit a parse tree produced by the {@code jumpStatement_break}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJumpStatement_break(MyCGrammerParser.JumpStatement_breakContext ctx);
	/**
	 * Visit a parse tree produced by the {@code jumpStatement_return}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJumpStatement_return(MyCGrammerParser.JumpStatement_returnContext ctx);
	/**
	 * Visit a parse tree produced by the {@code jumpStatement_}
	 * labeled alternative in {@link MyCGrammerParser#jumpStatement}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitJumpStatement_(MyCGrammerParser.JumpStatement_Context ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#compilationUnit}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitCompilationUnit(MyCGrammerParser.CompilationUnitContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#translationUnit}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitTranslationUnit(MyCGrammerParser.TranslationUnitContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#externalDeclaration}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitExternalDeclaration(MyCGrammerParser.ExternalDeclarationContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#functionDefinition}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionDefinition(MyCGrammerParser.FunctionDefinitionContext ctx);
	/**
	 * Visit a parse tree produced by {@link MyCGrammerParser#declarationList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitDeclarationList(MyCGrammerParser.DeclarationListContext ctx);
	/**
	 * Visit a parse tree produced by the {@code functionCall_}
	 * labeled alternative in {@link MyCGrammerParser#functionCall}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitFunctionCall_(MyCGrammerParser.FunctionCall_Context ctx);
}