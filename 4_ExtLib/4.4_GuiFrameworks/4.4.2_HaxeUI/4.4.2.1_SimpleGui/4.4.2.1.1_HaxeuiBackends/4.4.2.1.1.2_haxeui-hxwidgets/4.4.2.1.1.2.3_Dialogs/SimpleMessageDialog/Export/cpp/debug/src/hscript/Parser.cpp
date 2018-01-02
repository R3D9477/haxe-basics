// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#include <haxe/ds/GenericStack_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_47_new,"hscript.Parser","new",0x4b9f158c,"hscript.Parser.new","hscript/Parser.hx",47,0x98735743)
static const ::String _hx_array_data_e9f29f9a_4[] = {
	HX_("%",25,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_5[] = {
	HX_("*",2a,00,00,00),HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_6[] = {
	HX_("+",2b,00,00,00),HX_("-",2d,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_7[] = {
	HX_("<<",80,34,00,00),HX_(">>",40,36,00,00),HX_(">>>",fe,41,2f,00),
};
static const ::String _hx_array_data_e9f29f9a_8[] = {
	HX_("|",7c,00,00,00),HX_("&",26,00,00,00),HX_("^",5e,00,00,00),
};
static const ::String _hx_array_data_e9f29f9a_9[] = {
	HX_("==",60,35,00,00),HX_("!=",fc,1c,00,00),HX_(">",3e,00,00,00),HX_("<",3c,00,00,00),HX_(">=",3f,36,00,00),HX_("<=",81,34,00,00),
};
static const ::String _hx_array_data_e9f29f9a_10[] = {
	HX_("...",ee,0f,23,00),
};
static const ::String _hx_array_data_e9f29f9a_11[] = {
	HX_("&&",40,21,00,00),
};
static const ::String _hx_array_data_e9f29f9a_12[] = {
	HX_("||",80,6c,00,00),
};
static const ::String _hx_array_data_e9f29f9a_13[] = {
	HX_("=",3d,00,00,00),HX_("+=",b2,25,00,00),HX_("-=",70,27,00,00),HX_("*=",d3,24,00,00),HX_("/=",2e,29,00,00),HX_("%=",78,20,00,00),HX_("<<=",bd,bb,2d,00),HX_(">>=",fd,41,2f,00),HX_(">>>=",7f,7c,2a,29),HX_("|=",41,6c,00,00),HX_("&=",57,21,00,00),HX_("^=",1f,52,00,00),HX_("=>",61,35,00,00),
};
static const ::String _hx_array_data_e9f29f9a_14[] = {
	HX_("!",21,00,00,00),HX_("++",a0,25,00,00),HX_("--",60,27,00,00),HX_("-",2d,00,00,00),HX_("~",7e,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_145_error,"hscript.Parser","error",0x9bb1b3f4,"hscript.Parser.error","hscript/Parser.hx",145,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_150_invalidChar,"hscript.Parser","invalidChar",0x0ae4fe99,"hscript.Parser.invalidChar","hscript/Parser.hx",150,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_153_parseString,"hscript.Parser","parseString",0xed832690,"hscript.Parser.parseString","hscript/Parser.hx",153,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_158_parse,"hscript.Parser","parse",0xe5dd785f,"hscript.Parser.parse","hscript/Parser.hx",158,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_190_unexpected,"hscript.Parser","unexpected",0xb7770e25,"hscript.Parser.unexpected","hscript/Parser.hx",190,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_200_push,"hscript.Parser","push",0xe0f2532e,"hscript.Parser.push","hscript/Parser.hx",200,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_204_ensure,"hscript.Parser","ensure",0x52df3412,"hscript.Parser.ensure","hscript/Parser.hx",204,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_209_getIdent,"hscript.Parser","getIdent",0x33becdce,"hscript.Parser.getIdent","hscript/Parser.hx",209,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_223_expr,"hscript.Parser","expr",0xd9af3e89,"hscript.Parser.expr","hscript/Parser.hx",223,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_231_pmin,"hscript.Parser","pmin",0xe0ec3876,"hscript.Parser.pmin","hscript/Parser.hx",231,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_239_pmax,"hscript.Parser","pmax",0xe0ec3188,"hscript.Parser.pmax","hscript/Parser.hx",239,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_250_mk,"hscript.Parser","mk",0xd828e3b2,"hscript.Parser.mk","hscript/Parser.hx",250,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_255_isBlock,"hscript.Parser","isBlock",0x99f5642f,"hscript.Parser.isBlock","hscript/Parser.hx",255,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_271_parseFullExpr,"hscript.Parser","parseFullExpr",0x2c8eb1e3,"hscript.Parser.parseFullExpr","hscript/Parser.hx",271,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_283_parseObject,"hscript.Parser","parseObject",0xf1927c7e,"hscript.Parser.parseObject","hscript/Parser.hx",283,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_317_parseExpr,"hscript.Parser","parseExpr",0x8f01bd34,"hscript.Parser.parseExpr","hscript/Parser.hx",317,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_412_parseMetaArgs,"hscript.Parser","parseMetaArgs",0xfe617641,"hscript.Parser.parseMetaArgs","hscript/Parser.hx",412,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_436_mapCompr,"hscript.Parser","mapCompr",0xde0e1f9b,"hscript.Parser.mapCompr","hscript/Parser.hx",436,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_457_makeUnop,"hscript.Parser","makeUnop",0x60b6401c,"hscript.Parser.makeUnop","hscript/Parser.hx",457,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_465_makeBinop,"hscript.Parser","makeBinop",0x4ad5ff06,"hscript.Parser.makeBinop","hscript/Parser.hx",465,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_485_parseStructure,"hscript.Parser","parseStructure",0x237837d4,"hscript.Parser.parseStructure","hscript/Parser.hx",485,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_711_parseExprNext,"hscript.Parser","parseExprNext",0x83d61847,"hscript.Parser.parseExprNext","hscript/Parser.hx",711,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_743_parseType,"hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",743,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_823_parseTypeNext,"hscript.Parser","parseTypeNext",0x8b2ab44c,"hscript.Parser.parseTypeNext","hscript/Parser.hx",823,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_845_parseExprList,"hscript.Parser","parseExprList",0x8286afb2,"hscript.Parser.parseExprList","hscript/Parser.hx",845,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_864_incPos,"hscript.Parser","incPos",0xe19d25aa,"hscript.Parser.incPos","hscript/Parser.hx",864,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_872_readChar,"hscript.Parser","readChar",0x8625b4a0,"hscript.Parser.readChar","hscript/Parser.hx",872,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_875_readString,"hscript.Parser","readString",0xfc2f051b,"hscript.Parser.readString","hscript/Parser.hx",875,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_953_token,"hscript.Parser","token",0x3cb36b25,"hscript.Parser.token","hscript/Parser.hx",953,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1153_tokenComment,"hscript.Parser","tokenComment",0xb86c15ba,"hscript.Parser.tokenComment","hscript/Parser.hx",1153,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1196_constString,"hscript.Parser","constString",0x0a4693c0,"hscript.Parser.constString","hscript/Parser.hx",1196,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_1207_tokenString,"hscript.Parser","tokenString",0x05f471d6,"hscript.Parser.tokenString","hscript/Parser.hx",1207,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_94_boot,"hscript.Parser","boot",0xd7acc586,"hscript.Parser.boot","hscript/Parser.hx",94,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_95_boot,"hscript.Parser","boot",0xd7acc586,"hscript.Parser.boot","hscript/Parser.hx",95,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_96_boot,"hscript.Parser","boot",0xd7acc586,"hscript.Parser.boot","hscript/Parser.hx",96,0x98735743)
HX_LOCAL_STACK_FRAME(_hx_pos_2fd3d36595bebf3d_97_boot,"hscript.Parser","boot",0xd7acc586,"hscript.Parser.boot","hscript/Parser.hx",97,0x98735743)
namespace hscript{

void Parser_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_47_new)
HXLINE(  83)		this->uid = (int)0;
HXLINE( 108)		this->line = (int)1;
HXLINE( 109)		this->opChars = HX_("+*/-=!><&|^%~",e2,ec,c4,dc);
HXLINE( 110)		this->identChars = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_",e0,b5,3b,15);
HXLINE( 111)		::Array< ::Dynamic> priorities = ::Array_obj< ::Dynamic>::__new(10)->init(0,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_4,1))->init(1,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_5,2))->init(2,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_6,2))->init(3,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_7,3))->init(4,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_8,3))->init(5,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_9,6))->init(6,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_10,1))->init(7,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_11,1))->init(8,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_12,1))->init(9,::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_13,13));
HXLINE( 124)		this->opPriority =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 125)		this->opRightAssoc =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 126)		this->unops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 132)		{
HXLINE( 132)			int _g1 = (int)0;
HXDLIN( 132)			int _g = priorities->length;
HXDLIN( 132)			while((_g1 < _g)){
HXLINE( 132)				_g1 = (_g1 + (int)1);
HXDLIN( 132)				int i = (_g1 - (int)1);
HXLINE( 133)				{
HXLINE( 133)					int _g2 = (int)0;
HXDLIN( 133)					::Array< ::String > _g3 = priorities->__get(i).StaticCast< ::Array< ::String > >();
HXDLIN( 133)					while((_g2 < _g3->length)){
HXLINE( 133)						::String x = _g3->__get(_g2);
HXDLIN( 133)						_g2 = (_g2 + (int)1);
HXLINE( 134)						this->opPriority->set(x,i);
HXLINE( 135)						if ((i == (int)9)) {
HXLINE( 135)							this->opRightAssoc->set(x,true);
            						}
            					}
            				}
            			}
            		}
HXLINE( 137)		{
HXLINE( 137)			int _g4 = (int)0;
HXDLIN( 137)			::Array< ::String > _g11 = ::Array_obj< ::String >::fromData( _hx_array_data_e9f29f9a_14,5);
HXDLIN( 137)			while((_g4 < _g11->length)){
HXLINE( 137)				::String x1 = _g11->__get(_g4);
HXDLIN( 137)				_g4 = (_g4 + (int)1);
HXLINE( 138)				{
HXLINE( 138)					bool _hx_tmp;
HXDLIN( 138)					if ((x1 != HX_("++",a0,25,00,00))) {
HXLINE( 138)						_hx_tmp = (x1 == HX_("--",60,27,00,00));
            					}
            					else {
HXLINE( 138)						_hx_tmp = true;
            					}
HXDLIN( 138)					this->unops->set(x1,_hx_tmp);
            				}
            			}
            		}
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f5e8b32;
}

void Parser_obj::error( ::hscript::Error err,int pmin,int pmax){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_145_error)
HXDLIN( 145)		HX_STACK_DO_THROW(err);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

void Parser_obj::invalidChar(int c){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_150_invalidChar)
HXDLIN( 150)		HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidChar(c));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

 ::hscript::Expr Parser_obj::parseString(::String s,::String __o_origin){
::String origin = __o_origin.Default(HX_HCSTRING("hscript","\x73","\x8c","\x18","\x2c"));
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_153_parseString)
HXLINE( 154)		this->uid = (int)0;
HXLINE( 155)		return this->parse( ::haxe::io::StringInput_obj::__alloc( HX_CTX ,s),origin);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parseString,return )

 ::hscript::Expr Parser_obj::parse( ::haxe::io::Input s,::String __o_origin){
::String origin = __o_origin.Default(HX_HCSTRING("hscript","\x73","\x8c","\x18","\x2c"));
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_158_parse)
HXLINE( 159)		this->line = (int)1;
HXLINE( 167)		this->tokens =  ::haxe::ds::GenericStack_hscript_Token_obj::__alloc( HX_CTX );
HXLINE( 171)		this->_hx_char = (int)-1;
HXLINE( 172)		this->input = s;
HXLINE( 173)		this->ops = ::Array_obj< bool >::__new();
HXLINE( 174)		this->idents = ::Array_obj< bool >::__new();
HXLINE( 175)		{
HXLINE( 175)			int _g1 = (int)0;
HXDLIN( 175)			int _g = this->opChars.length;
HXDLIN( 175)			while((_g1 < _g)){
HXLINE( 175)				_g1 = (_g1 + (int)1);
HXDLIN( 175)				int i = (_g1 - (int)1);
HXLINE( 176)				::Array< bool > _hx_tmp = this->ops;
HXDLIN( 176)				_hx_tmp[this->opChars.charCodeAt(i)] = true;
            			}
            		}
HXLINE( 177)		{
HXLINE( 177)			int _g11 = (int)0;
HXDLIN( 177)			int _g2 = this->identChars.length;
HXDLIN( 177)			while((_g11 < _g2)){
HXLINE( 177)				_g11 = (_g11 + (int)1);
HXDLIN( 177)				int i1 = (_g11 - (int)1);
HXLINE( 178)				::Array< bool > _hx_tmp1 = this->idents;
HXDLIN( 178)				_hx_tmp1[this->identChars.charCodeAt(i1)] = true;
            			}
            		}
HXLINE( 179)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 180)		while(true){
HXLINE( 181)			 ::hscript::Token tk = this->token();
HXLINE( 182)			if (hx::IsEq( tk,::hscript::Token_obj::TEof_dyn() )) {
HXLINE( 182)				goto _hx_goto_20;
            			}
HXLINE( 183)			{
HXLINE( 183)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 183)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 184)			a->push(this->parseFullExpr());
            		}
            		_hx_goto_20:;
HXLINE( 186)		if ((a->length == (int)1)) {
HXLINE( 186)			return a->__get((int)0).StaticCast<  ::hscript::Expr >();
            		}
            		else {
HXLINE( 186)			return ::hscript::Expr_obj::EBlock(a);
            		}
HXDLIN( 186)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parse,return )

 ::Dynamic Parser_obj::unexpected( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_190_unexpected)
HXDLIN( 190)		HX_STACK_DO_THROW(::hscript::Error_obj::EUnexpected(this->tokenString(tk)));
HXDLIN( 190)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

void Parser_obj::push( ::hscript::Token tk){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_200_push)
HXDLIN( 200)		 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 200)		_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

void Parser_obj::ensure( ::hscript::Token tk){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_204_ensure)
HXLINE( 205)		 ::hscript::Token t = this->token();
HXLINE( 206)		if (hx::IsNotEq( t,tk )) {
HXLINE( 206)			this->unexpected(t);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

::String Parser_obj::getIdent(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_209_getIdent)
HXLINE( 210)		 ::hscript::Token tk = this->token();
HXLINE( 211)		if ((_hx_getEnumValueIndex(tk) == (int)2)) {
HXLINE( 212)			::String id = tk->_hx_getString(0);
HXDLIN( 212)			return id;
            		}
            		else {
HXLINE( 214)			this->unexpected(tk);
HXLINE( 215)			return null();
            		}
HXLINE( 211)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,getIdent,return )

 ::hscript::Expr Parser_obj::expr( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_223_expr)
HXDLIN( 223)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_231_pmin)
HXDLIN( 231)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_239_pmax)
HXDLIN( 239)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

 ::hscript::Expr Parser_obj::mk( ::hscript::Expr e, ::Dynamic pmin, ::Dynamic pmax){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_250_mk)
HXDLIN( 250)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_255_isBlock)
HXDLIN( 255)		switch((int)(_hx_getEnumValueIndex(e))){
            			case (int)2: {
HXLINE( 258)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 258)				if (hx::IsNotNull( e1 )) {
HXLINE( 258)					return this->isBlock(e1);
            				}
            				else {
HXLINE( 258)					return false;
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 260)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 260)				return this->isBlock(e2);
            			}
            			break;
            			case (int)7: {
HXLINE( 261)				 ::hscript::Expr e3 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 261)				bool prefix = e->_hx_getBool(1);
HXDLIN( 261)				if (!(prefix)) {
HXLINE( 261)					return this->isBlock(e3);
            				}
            				else {
HXLINE( 261)					return false;
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 259)				 ::hscript::Expr e21 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 259)				 ::hscript::Expr e11 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 259)				if (hx::IsNotNull( e21 )) {
HXLINE( 259)					return this->isBlock(e21);
            				}
            				else {
HXLINE( 259)					return this->isBlock(e11);
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 262)				 ::hscript::Expr e4 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 262)				return this->isBlock(e4);
            			}
            			break;
            			case (int)11: {
HXLINE( 264)				 ::hscript::Expr e5 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 264)				return this->isBlock(e5);
            			}
            			break;
            			case (int)14: {
HXLINE( 257)				 ::hscript::Expr e6 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 257)				return this->isBlock(e6);
            			}
            			break;
            			case (int)15: {
HXLINE( 265)				 ::hscript::Expr e7 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 265)				if (hx::IsNotNull( e7 )) {
HXLINE( 265)					return this->isBlock(e7);
            				}
            				else {
HXLINE( 265)					return false;
            				}
            			}
            			break;
            			case (int)20: {
HXLINE( 266)				 ::hscript::Expr e8 = e->_hx_getObject(3).StaticCast<  ::hscript::Expr >();
HXDLIN( 266)				return this->isBlock(e8);
            			}
            			break;
            			case (int)4: case (int)21: case (int)23: {
HXLINE( 256)				return true;
            			}
            			break;
            			case (int)24: {
HXLINE( 263)				 ::hscript::Expr e9 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 263)				return this->isBlock(e9);
            			}
            			break;
            			default:{
HXLINE( 267)				return false;
            			}
            		}
HXLINE( 255)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

 ::hscript::Expr Parser_obj::parseFullExpr(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_271_parseFullExpr)
HXLINE( 272)		 ::hscript::Expr e = this->parseExpr();
HXLINE( 273)		 ::hscript::Token tk = this->token();
HXLINE( 274)		bool _hx_tmp;
HXDLIN( 274)		if (hx::IsNotEq( tk,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 274)			_hx_tmp = hx::IsNotEq( tk,::hscript::Token_obj::TEof_dyn() );
            		}
            		else {
HXLINE( 274)			_hx_tmp = false;
            		}
HXDLIN( 274)		if (_hx_tmp) {
HXLINE( 275)			if (this->isBlock(e)) {
HXLINE( 276)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 276)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
            			else {
HXLINE( 278)				this->unexpected(tk);
            			}
            		}
HXLINE( 280)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFullExpr,return )

 ::hscript::Expr Parser_obj::parseObject( ::Dynamic p1){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_283_parseObject)
HXLINE( 285)		::Array< ::Dynamic> fl = ::Array_obj< ::Dynamic>::__new();
HXLINE( 286)		while(true){
HXLINE( 287)			 ::hscript::Token tk = this->token();
HXLINE( 288)			::String id = null();
HXLINE( 289)			switch((int)(_hx_getEnumValueIndex(tk))){
            				case (int)1: {
HXLINE( 291)					 ::hscript::Const c = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN( 291)					{
HXLINE( 292)						if (!(this->allowJSON)) {
HXLINE( 293)							this->unexpected(tk);
            						}
HXLINE( 294)						if ((_hx_getEnumValueIndex(c) == (int)2)) {
HXLINE( 295)							::String s = c->_hx_getString(0);
HXDLIN( 295)							id = s;
            						}
            						else {
HXLINE( 296)							this->unexpected(tk);
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 290)					::String i = tk->_hx_getString(0);
HXDLIN( 290)					id = i;
            				}
            				break;
            				case (int)7: {
HXLINE( 299)					goto _hx_goto_32;
            				}
            				break;
            				default:{
HXLINE( 301)					this->unexpected(tk);
            				}
            			}
HXLINE( 303)			{
HXLINE( 303)				 ::hscript::Token t = this->token();
HXDLIN( 303)				if (hx::IsNotEq( t,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 303)					this->unexpected(t);
            				}
            			}
HXLINE( 304)			fl->push( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("e",65,00,00,00),this->parseExpr())
            				->setFixed(1,HX_("name",4b,72,ff,48),id)));
HXLINE( 305)			tk = this->token();
HXLINE( 306)			switch((int)(_hx_getEnumValueIndex(tk))){
            				case (int)7: {
HXLINE( 308)					goto _hx_goto_32;
            				}
            				break;
            				case (int)9: {
            				}
            				break;
            				default:{
HXLINE( 311)					this->unexpected(tk);
            				}
            			}
            		}
            		_hx_goto_32:;
HXLINE( 314)		return this->parseExprNext(::hscript::Expr_obj::EObject(fl));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

 ::hscript::Expr Parser_obj::parseExpr(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_317_parseExpr)
HXLINE( 318)		 ::hscript::Token tk = this->token();
HXLINE( 322)		switch((int)(_hx_getEnumValueIndex(tk))){
            			case (int)1: {
HXLINE( 328)				 ::hscript::Const c = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 329)				return this->parseExprNext(::hscript::Expr_obj::EConst(c));
            			}
            			break;
            			case (int)2: {
HXLINE( 323)				::String id = tk->_hx_getString(0);
HXLINE( 324)				 ::hscript::Expr e = this->parseStructure(id);
HXLINE( 325)				if (hx::IsNull( e )) {
HXLINE( 326)					e = ::hscript::Expr_obj::EIdent(id);
            				}
HXLINE( 327)				return this->parseExprNext(e);
            			}
            			break;
            			case (int)3: {
HXLINE( 377)				::String op = tk->_hx_getString(0);
HXLINE( 378)				if (::haxe::IMap_obj::exists(this->unops,op)) {
HXLINE( 379)					return this->makeUnop(op,this->parseExpr());
            				}
HXLINE( 380)				return this->unexpected(tk);
            			}
            			break;
            			case (int)4: {
HXLINE( 331)				 ::hscript::Expr e1 = this->parseExpr();
HXLINE( 332)				{
HXLINE( 332)					 ::hscript::Token t = this->token();
HXDLIN( 332)					if (hx::IsNotEq( t,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 332)						this->unexpected(t);
            					}
            				}
HXLINE( 333)				return this->parseExprNext(::hscript::Expr_obj::EParent(e1));
            			}
            			break;
            			case (int)6: {
HXLINE( 335)				tk = this->token();
HXLINE( 336)				switch((int)(_hx_getEnumValueIndex(tk))){
            					case (int)1: {
HXLINE( 348)						 ::hscript::Const c1 = tk->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 349)						if (this->allowJSON) {
HXLINE( 350)							if ((_hx_getEnumValueIndex(c1) == (int)2)) {
HXLINE( 352)								 ::hscript::Token tk2 = this->token();
HXLINE( 353)								{
HXLINE( 353)									 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 353)									_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk2,_this->head);
            								}
HXLINE( 354)								{
HXLINE( 354)									 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 354)									_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this1->head);
            								}
HXLINE( 355)								if ((_hx_getEnumValueIndex(tk2) == (int)14)) {
HXLINE( 357)									return this->parseExprNext(this->parseObject((int)0));
            								}
            							}
            							else {
HXLINE( 361)								 ::haxe::ds::GenericStack_hscript_Token _this2 = this->tokens;
HXDLIN( 361)								_this2->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this2->head);
            							}
            						}
            						else {
HXLINE( 364)							 ::haxe::ds::GenericStack_hscript_Token _this3 = this->tokens;
HXDLIN( 364)							_this3->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this3->head);
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 340)						 ::hscript::Token tk21 = this->token();
HXLINE( 341)						{
HXLINE( 341)							 ::haxe::ds::GenericStack_hscript_Token _this4 = this->tokens;
HXDLIN( 341)							_this4->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk21,_this4->head);
            						}
HXLINE( 342)						{
HXLINE( 342)							 ::haxe::ds::GenericStack_hscript_Token _this5 = this->tokens;
HXDLIN( 342)							_this5->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this5->head);
            						}
HXLINE( 343)						if ((_hx_getEnumValueIndex(tk21) == (int)14)) {
HXLINE( 345)							return this->parseExprNext(this->parseObject((int)0));
            						}
            					}
            					break;
            					case (int)7: {
HXLINE( 338)						return this->parseExprNext(::hscript::Expr_obj::EObject(::Array_obj< ::Dynamic>::__new(0)));
            					}
            					break;
            					default:{
HXLINE( 366)						 ::haxe::ds::GenericStack_hscript_Token _this6 = this->tokens;
HXDLIN( 366)						_this6->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this6->head);
            					}
            				}
HXLINE( 368)				::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 369)				while(true){
HXLINE( 370)					a->push(this->parseFullExpr());
HXLINE( 371)					tk = this->token();
HXLINE( 372)					if (hx::IsEq( tk,::hscript::Token_obj::TBrClose_dyn() )) {
HXLINE( 373)						goto _hx_goto_34;
            					}
HXLINE( 374)					{
HXLINE( 374)						 ::haxe::ds::GenericStack_hscript_Token _this7 = this->tokens;
HXDLIN( 374)						_this7->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this7->head);
            					}
            				}
            				_hx_goto_34:;
HXLINE( 376)				return ::hscript::Expr_obj::EBlock(a);
            			}
            			break;
            			case (int)11: {
HXLINE( 382)				::Array< ::Dynamic> a1 = ::Array_obj< ::Dynamic>::__new();
HXLINE( 383)				tk = this->token();
HXLINE( 384)				while(hx::IsNotEq( tk,::hscript::Token_obj::TBkClose_dyn() )){
HXLINE( 385)					{
HXLINE( 385)						 ::haxe::ds::GenericStack_hscript_Token _this8 = this->tokens;
HXDLIN( 385)						_this8->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this8->head);
            					}
HXLINE( 386)					a1->push(this->parseExpr());
HXLINE( 387)					tk = this->token();
HXLINE( 388)					if (hx::IsEq( tk,::hscript::Token_obj::TComma_dyn() )) {
HXLINE( 389)						tk = this->token();
            					}
            				}
HXLINE( 391)				if ((a1->length == (int)1)) {
HXLINE( 392)					 ::hscript::Expr _g = a1->__get((int)0).StaticCast<  ::hscript::Expr >();
HXDLIN( 392)					switch((int)(_hx_getEnumValueIndex(_g))){
            						case (int)10: case (int)11: case (int)24: {
HXLINE( 394)							::String tmp = (HX_("__a_",fe,af,13,3f) + this->uid++);
HXLINE( 396)							 ::hscript::Expr e2 = ::hscript::Expr_obj::EVar(tmp,null(),::hscript::Expr_obj::EArrayDecl(::Array_obj< ::Dynamic>::__new(0)));
HXLINE( 395)							 ::hscript::Expr e3 = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(3)->init(0,e2)->init(1,this->mapCompr(tmp,a1->__get((int)0).StaticCast<  ::hscript::Expr >()))->init(2,::hscript::Expr_obj::EIdent(tmp)));
HXLINE( 400)							return this->parseExprNext(e3);
            						}
            						break;
            						default:{
            						}
            					}
            				}
HXLINE( 403)				return this->parseExprNext(::hscript::Expr_obj::EArrayDecl(a1));
            			}
            			break;
            			case (int)15: {
HXLINE( 404)				::String id1 = tk->_hx_getString(0);
HXDLIN( 404)				if (this->allowMetadata) {
HXLINE( 405)					::Array< ::Dynamic> args = this->parseMetaArgs();
HXLINE( 406)					return ::hscript::Expr_obj::EMeta(id1,args,this->parseExpr());
            				}
            				else {
HXLINE( 408)					return this->unexpected(tk);
            				}
            			}
            			break;
            			default:{
HXLINE( 408)				return this->unexpected(tk);
            			}
            		}
HXLINE( 322)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

::Array< ::Dynamic> Parser_obj::parseMetaArgs(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_412_parseMetaArgs)
HXLINE( 413)		 ::hscript::Token tk = this->token();
HXLINE( 414)		if (hx::IsNotEq( tk,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 415)			{
HXLINE( 415)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 415)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            			}
HXLINE( 416)			return null();
            		}
HXLINE( 418)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 419)		tk = this->token();
HXLINE( 420)		if (hx::IsNotEq( tk,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 421)			{
HXLINE( 421)				 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 421)				_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this1->head);
            			}
HXLINE( 422)			while(true){
HXLINE( 423)				args->push(this->parseExpr());
HXLINE( 424)				{
HXLINE( 424)					 ::hscript::Token _g = this->token();
HXDLIN( 424)					switch((int)(_hx_getEnumValueIndex(_g))){
            						case (int)5: {
HXLINE( 427)							goto _hx_goto_37;
            						}
            						break;
            						case (int)9: {
            						}
            						break;
            						default:{
HXLINE( 428)							 ::hscript::Token tk1 = _g;
HXLINE( 429)							this->unexpected(tk1);
            						}
            					}
            				}
            			}
            			_hx_goto_37:;
            		}
HXLINE( 433)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseMetaArgs,return )

 ::hscript::Expr Parser_obj::mapCompr(::String tmp, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_436_mapCompr)
HXLINE( 437)		 ::hscript::Expr edef;
HXDLIN( 437)		switch((int)(_hx_getEnumValueIndex(e))){
            			case (int)3: {
HXLINE( 448)				 ::hscript::Expr e2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 437)				edef = ::hscript::Expr_obj::EParent(this->mapCompr(tmp,e2));
            			}
            			break;
            			case (int)4: {
HXLINE( 437)				if ((e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >()->length == (int)1)) {
HXLINE( 446)					 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >()->__get((int)0).StaticCast<  ::hscript::Expr >();
HXLINE( 437)					edef = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(1)->init(0,this->mapCompr(tmp,e1)));
            				}
            				else {
HXLINE( 437)					edef = ::hscript::Expr_obj::ECall(::hscript::Expr_obj::EField(::hscript::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 444)				 ::hscript::Expr e21 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 444)				 ::hscript::Expr e11 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 444)				 ::hscript::Expr cond = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 444)				if (hx::IsNull( e21 )) {
HXLINE( 437)					edef = ::hscript::Expr_obj::EIf(cond,this->mapCompr(tmp,e11),null());
            				}
            				else {
HXLINE( 437)					edef = ::hscript::Expr_obj::ECall(::hscript::Expr_obj::EField(::hscript::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 440)				 ::hscript::Expr e22 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 440)				 ::hscript::Expr cond1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 437)				edef = ::hscript::Expr_obj::EWhile(cond1,this->mapCompr(tmp,e22));
            			}
            			break;
            			case (int)11: {
HXLINE( 438)				 ::hscript::Expr e23 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 438)				 ::hscript::Expr it = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 438)				::String v = e->_hx_getString(0);
HXLINE( 437)				edef = ::hscript::Expr_obj::EFor(v,it,this->mapCompr(tmp,e23));
            			}
            			break;
            			case (int)24: {
HXLINE( 442)				 ::hscript::Expr e24 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 442)				 ::hscript::Expr cond2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 437)				edef = ::hscript::Expr_obj::EDoWhile(cond2,this->mapCompr(tmp,e24));
            			}
            			break;
            			default:{
HXLINE( 437)				edef = ::hscript::Expr_obj::ECall(::hscript::Expr_obj::EField(::hscript::Expr_obj::EIdent(tmp),HX_("push",da,11,61,4a)),::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            			}
            		}
HXLINE( 453)		return edef;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapCompr,return )

 ::hscript::Expr Parser_obj::makeUnop(::String op, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_457_makeUnop)
HXDLIN( 457)		switch((int)(_hx_getEnumValueIndex(e))){
            			case (int)6: {
HXLINE( 458)				 ::hscript::Expr e2 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 458)				 ::hscript::Expr e1 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 458)				::String bop = e->_hx_getString(0);
HXDLIN( 458)				return ::hscript::Expr_obj::EBinop(bop,this->makeUnop(op,e1),e2);
            			}
            			break;
            			case (int)22: {
HXLINE( 459)				 ::hscript::Expr e3 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 459)				 ::hscript::Expr e21 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 459)				 ::hscript::Expr e11 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 459)				return ::hscript::Expr_obj::ETernary(this->makeUnop(op,e11),e21,e3);
            			}
            			break;
            			default:{
HXLINE( 460)				return ::hscript::Expr_obj::EUnop(op,true,e);
            			}
            		}
HXLINE( 457)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

 ::hscript::Expr Parser_obj::makeBinop(::String op, ::hscript::Expr e1, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_465_makeBinop)
HXDLIN( 465)		switch((int)(_hx_getEnumValueIndex(e))){
            			case (int)6: {
HXLINE( 466)				 ::hscript::Expr e3 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 466)				 ::hscript::Expr e2 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 466)				::String op2 = e->_hx_getString(0);
HXLINE( 467)				bool _hx_tmp;
HXDLIN( 467)				 ::Dynamic _hx_tmp1 = ::haxe::IMap_obj::get(this->opPriority,op);
HXDLIN( 467)				if (hx::IsLessEq( _hx_tmp1,::haxe::IMap_obj::get(this->opPriority,op2) )) {
HXLINE( 467)					_hx_tmp = !(::haxe::IMap_obj::exists(this->opRightAssoc,op));
            				}
            				else {
HXLINE( 467)					_hx_tmp = false;
            				}
HXDLIN( 467)				if (_hx_tmp) {
HXLINE( 468)					return ::hscript::Expr_obj::EBinop(op2,this->makeBinop(op,e1,e2),e3);
            				}
            				else {
HXLINE( 470)					return ::hscript::Expr_obj::EBinop(op,e1,e);
            				}
            			}
            			break;
            			case (int)22: {
HXLINE( 471)				 ::hscript::Expr e4 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 471)				 ::hscript::Expr e31 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 471)				 ::hscript::Expr e21 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 472)				if (::haxe::IMap_obj::exists(this->opRightAssoc,op)) {
HXLINE( 473)					return ::hscript::Expr_obj::EBinop(op,e1,e);
            				}
            				else {
HXLINE( 475)					return ::hscript::Expr_obj::ETernary(this->makeBinop(op,e1,e21),e31,e4);
            				}
            			}
            			break;
            			default:{
HXLINE( 477)				return ::hscript::Expr_obj::EBinop(op,e1,e);
            			}
            		}
HXLINE( 465)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

 ::hscript::Expr Parser_obj::parseStructure(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_485_parseStructure)
HXDLIN( 485)		::String _hx_switch_0 = id;
            		if (  (_hx_switch_0==HX_("break",bf,24,ec,b8)) ){
HXLINE( 542)			return ::hscript::Expr_obj::EBreak_dyn();
HXDLIN( 542)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("continue",67,e0,c8,31)) ){
HXLINE( 543)			return ::hscript::Expr_obj::EContinue_dyn();
HXDLIN( 543)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("do",8b,57,00,00)) ){
HXLINE( 524)			 ::hscript::Expr e = this->parseExpr();
HXLINE( 525)			 ::hscript::Token tk = this->token();
HXLINE( 526)			if ((_hx_getEnumValueIndex(tk) == (int)2)) {
HXLINE( 526)				if ((tk->_hx_getString(0) != HX_("while",b1,43,bd,c9))) {
HXLINE( 529)					this->unexpected(tk);
            				}
            			}
            			else {
HXLINE( 529)				this->unexpected(tk);
            			}
HXLINE( 531)			 ::hscript::Expr econd = this->parseExpr();
HXLINE( 532)			return ::hscript::Expr_obj::EDoWhile(econd,e);
HXLINE( 523)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("else",b9,e4,14,43)) ){
HXLINE( 544)			return this->unexpected(::hscript::Token_obj::TId(id));
HXDLIN( 544)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("for",09,c7,4d,00)) ){
HXLINE( 534)			{
HXLINE( 534)				 ::hscript::Token t = this->token();
HXDLIN( 534)				if (hx::IsNotEq( t,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 534)					this->unexpected(t);
            				}
            			}
HXLINE( 535)			::String vname = this->getIdent();
HXLINE( 536)			 ::hscript::Token tk1 = this->token();
HXLINE( 537)			if (!(::Type_obj::enumEq(tk1,::hscript::Token_obj::TId(HX_("in",e5,5b,00,00))))) {
HXLINE( 537)				this->unexpected(tk1);
            			}
HXLINE( 538)			 ::hscript::Expr eiter = this->parseExpr();
HXLINE( 539)			{
HXLINE( 539)				 ::hscript::Token t1 = this->token();
HXDLIN( 539)				if (hx::IsNotEq( t1,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 539)					this->unexpected(t1);
            				}
            			}
HXLINE( 540)			 ::hscript::Expr e1 = this->parseExpr();
HXLINE( 541)			return ::hscript::Expr_obj::EFor(vname,eiter,e1);
HXLINE( 533)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("function",18,ab,52,14)) ){
HXLINE( 546)			 ::hscript::Token tk2 = this->token();
HXLINE( 547)			::String name = null();
HXLINE( 548)			if ((_hx_getEnumValueIndex(tk2) == (int)2)) {
HXLINE( 549)				::String id1 = tk2->_hx_getString(0);
HXDLIN( 549)				name = id1;
            			}
            			else {
HXLINE( 550)				 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 550)				_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk2,_this->head);
            			}
HXLINE( 552)			{
HXLINE( 552)				 ::hscript::Token t2 = this->token();
HXDLIN( 552)				if (hx::IsNotEq( t2,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 552)					this->unexpected(t2);
            				}
            			}
HXLINE( 553)			::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new();
HXLINE( 554)			tk2 = this->token();
HXLINE( 555)			if (hx::IsNotEq( tk2,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 556)				bool done = false;
HXLINE( 557)				while(!(done)){
HXLINE( 558)					::String name1 = null();
HXDLIN( 558)					bool opt = false;
HXLINE( 559)					if ((_hx_getEnumValueIndex(tk2) == (int)13)) {
HXLINE( 561)						opt = true;
HXLINE( 562)						tk2 = this->token();
            					}
HXLINE( 565)					if ((_hx_getEnumValueIndex(tk2) == (int)2)) {
HXLINE( 566)						::String id2 = tk2->_hx_getString(0);
HXDLIN( 566)						name1 = id2;
            					}
            					else {
HXLINE( 567)						this->unexpected(tk2);
            					}
HXLINE( 569)					tk2 = this->token();
HXLINE( 570)					 ::Dynamic arg =  ::Dynamic(hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("name",4b,72,ff,48),name1));
HXLINE( 571)					args->push(arg);
HXLINE( 572)					if (opt) {
HXLINE( 572)						arg->__SetField(HX_("opt",33,9c,54,00),true,hx::paccDynamic);
            					}
HXLINE( 573)					bool _hx_tmp;
HXDLIN( 573)					if (hx::IsEq( tk2,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 573)						_hx_tmp = this->allowTypes;
            					}
            					else {
HXLINE( 573)						_hx_tmp = false;
            					}
HXDLIN( 573)					if (_hx_tmp) {
HXLINE( 574)						arg->__SetField(HX_("t",74,00,00,00),this->parseType(),hx::paccDynamic);
HXLINE( 575)						tk2 = this->token();
            					}
HXLINE( 577)					switch((int)(_hx_getEnumValueIndex(tk2))){
            						case (int)5: {
HXLINE( 581)							done = true;
            						}
            						break;
            						case (int)9: {
HXLINE( 579)							tk2 = this->token();
            						}
            						break;
            						default:{
HXLINE( 583)							this->unexpected(tk2);
            						}
            					}
            				}
            			}
HXLINE( 587)			 ::hscript::CType ret = null();
HXLINE( 588)			if (this->allowTypes) {
HXLINE( 589)				tk2 = this->token();
HXLINE( 590)				if (hx::IsNotEq( tk2,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 591)					 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 591)					_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk2,_this1->head);
            				}
            				else {
HXLINE( 593)					ret = this->parseType();
            				}
            			}
HXLINE( 595)			 ::hscript::Expr body = this->parseExpr();
HXLINE( 596)			return ::hscript::Expr_obj::EFunction(args,body,name,ret);
HXLINE( 545)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE( 487)			{
HXLINE( 487)				 ::hscript::Token t3 = this->token();
HXDLIN( 487)				if (hx::IsNotEq( t3,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 487)					this->unexpected(t3);
            				}
            			}
HXLINE( 488)			 ::hscript::Expr cond = this->parseExpr();
HXLINE( 489)			{
HXLINE( 489)				 ::hscript::Token t4 = this->token();
HXDLIN( 489)				if (hx::IsNotEq( t4,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 489)					this->unexpected(t4);
            				}
            			}
HXLINE( 490)			 ::hscript::Expr e11 = this->parseExpr();
HXLINE( 491)			 ::hscript::Expr e2 = null();
HXLINE( 492)			bool semic = false;
HXLINE( 493)			 ::hscript::Token tk3 = this->token();
HXLINE( 494)			if (hx::IsEq( tk3,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 495)				semic = true;
HXLINE( 496)				tk3 = this->token();
            			}
HXLINE( 498)			if (::Type_obj::enumEq(tk3,::hscript::Token_obj::TId(HX_("else",b9,e4,14,43)))) {
HXLINE( 499)				e2 = this->parseExpr();
            			}
            			else {
HXLINE( 501)				{
HXLINE( 501)					 ::haxe::ds::GenericStack_hscript_Token _this2 = this->tokens;
HXDLIN( 501)					_this2->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk3,_this2->head);
            				}
HXLINE( 502)				if (semic) {
HXLINE( 502)					 ::haxe::ds::GenericStack_hscript_Token _this3 = this->tokens;
HXDLIN( 502)					_this3->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,::hscript::Token_obj::TSemicolon_dyn(),_this3->head);
            				}
            			}
HXLINE( 504)			return ::hscript::Expr_obj::EIf(cond,e11,e2);
HXLINE( 486)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("new",60,d0,53,00)) ){
HXLINE( 603)			::Array< ::String > a = ::Array_obj< ::String >::__new();
HXLINE( 604)			a->push(this->getIdent());
HXLINE( 605)			bool next = true;
HXLINE( 606)			while(next){
HXLINE( 607)				 ::hscript::Token tk4 = this->token();
HXLINE( 608)				switch((int)(_hx_getEnumValueIndex(tk4))){
            					case (int)4: {
HXLINE( 612)						next = false;
            					}
            					break;
            					case (int)8: {
HXLINE( 610)						a->push(this->getIdent());
            					}
            					break;
            					default:{
HXLINE( 614)						this->unexpected(tk4);
            					}
            				}
            			}
HXLINE( 617)			::Array< ::Dynamic> args1 = this->parseExprList(::hscript::Token_obj::TPClose_dyn());
HXLINE( 618)			return ::hscript::Expr_obj::ENew(a->join(HX_(".",2e,00,00,00)),args1);
HXLINE( 602)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("return",b0,a4,2d,09)) ){
HXLINE( 598)			 ::hscript::Token tk5 = this->token();
HXLINE( 599)			{
HXLINE( 599)				 ::haxe::ds::GenericStack_hscript_Token _this4 = this->tokens;
HXDLIN( 599)				_this4->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk5,_this4->head);
            			}
HXLINE( 600)			 ::hscript::Expr e3;
HXDLIN( 600)			if (hx::IsEq( tk5,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 600)				e3 = null();
            			}
            			else {
HXLINE( 600)				e3 = this->parseExpr();
            			}
HXLINE( 601)			return ::hscript::Expr_obj::EReturn(e3);
HXLINE( 597)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("switch",f4,49,79,c5)) ){
HXLINE( 640)			 ::hscript::Expr e4 = this->parseExpr();
HXLINE( 641)			 ::hscript::Expr def = null();
HXDLIN( 641)			::Array< ::Dynamic> cases = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 642)			{
HXLINE( 642)				 ::hscript::Token t5 = this->token();
HXDLIN( 642)				if (hx::IsNotEq( t5,::hscript::Token_obj::TBrOpen_dyn() )) {
HXLINE( 642)					this->unexpected(t5);
            				}
            			}
HXLINE( 643)			while(true){
HXLINE( 644)				 ::hscript::Token tk6 = this->token();
HXLINE( 645)				switch((int)(_hx_getEnumValueIndex(tk6))){
            					case (int)2: {
HXLINE( 645)						::String _hx_switch_1 = tk6->_hx_getString(0);
            						if (  (_hx_switch_1==HX_("case",b0,1e,ba,41)) ){
HXLINE( 647)							 ::Dynamic c =  ::Dynamic(hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("expr",35,fd,1d,43),null())
            								->setFixed(1,HX_("values",e2,03,b7,4f),::Array_obj< ::Dynamic>::__new(0)));
HXLINE( 648)							cases->push(c);
HXLINE( 649)							while(true){
HXLINE( 650)								 ::hscript::Expr e5 = this->parseExpr();
HXLINE( 651)								( (::Array< ::Dynamic>)(c->__Field(HX_("values",e2,03,b7,4f),hx::paccDynamic)) )->push(e5);
HXLINE( 652)								tk6 = this->token();
HXLINE( 653)								switch((int)(_hx_getEnumValueIndex(tk6))){
            									case (int)9: {
            									}
            									break;
            									case (int)14: {
HXLINE( 657)										goto _hx_goto_47;
            									}
            									break;
            									default:{
HXLINE( 659)										this->unexpected(tk6);
            									}
            								}
            							}
            							_hx_goto_47:;
HXLINE( 662)							::Array< ::Dynamic> exprs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 663)							while(true){
HXLINE( 664)								tk6 = this->token();
HXLINE( 665)								{
HXLINE( 665)									 ::haxe::ds::GenericStack_hscript_Token _this5 = this->tokens;
HXDLIN( 665)									_this5->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk6,_this5->head);
            								}
HXLINE( 666)								switch((int)(_hx_getEnumValueIndex(tk6))){
            									case (int)2: {
HXLINE( 666)										::String _hx_switch_2 = tk6->_hx_getString(0);
            										if (  (_hx_switch_2==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_2==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 668)											goto _hx_goto_48;
HXDLIN( 668)											goto _hx_goto_49;
            										}
            										/* default */{
HXLINE( 670)											exprs->push(this->parseFullExpr());
            										}
            										_hx_goto_49:;
            									}
            									break;
            									case (int)7: {
HXLINE( 668)										goto _hx_goto_48;
            									}
            									break;
            									default:{
HXLINE( 670)										exprs->push(this->parseFullExpr());
            									}
            								}
            							}
            							_hx_goto_48:;
HXLINE( 673)							 ::hscript::Expr _hx_tmp1;
HXDLIN( 673)							if ((exprs->length == (int)1)) {
HXLINE( 673)								_hx_tmp1 = exprs->__get((int)0).StaticCast<  ::hscript::Expr >();
            							}
            							else {
HXLINE( 675)								if ((exprs->length == (int)0)) {
HXLINE( 673)									_hx_tmp1 = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
            								}
            								else {
HXLINE( 678)									 ::hscript::Expr e6 = exprs->__get((exprs->length - (int)1)).StaticCast<  ::hscript::Expr >();
HXDLIN( 678)									 ::Dynamic pmax = (int)0;
HXLINE( 673)									_hx_tmp1 = ::hscript::Expr_obj::EBlock(exprs);
            								}
            							}
HXDLIN( 673)							c->__SetField(HX_("expr",35,fd,1d,43),_hx_tmp1,hx::paccDynamic);
HXLINE( 646)							goto _hx_goto_46;
            						}
            						if (  (_hx_switch_1==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 680)							if (hx::IsNotNull( def )) {
HXLINE( 680)								this->unexpected(tk6);
            							}
HXLINE( 681)							{
HXLINE( 681)								 ::hscript::Token t6 = this->token();
HXDLIN( 681)								if (hx::IsNotEq( t6,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 681)									this->unexpected(t6);
            								}
            							}
HXLINE( 682)							::Array< ::Dynamic> exprs1 = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 683)							while(true){
HXLINE( 684)								tk6 = this->token();
HXLINE( 685)								{
HXLINE( 685)									 ::haxe::ds::GenericStack_hscript_Token _this6 = this->tokens;
HXDLIN( 685)									_this6->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk6,_this6->head);
            								}
HXLINE( 686)								switch((int)(_hx_getEnumValueIndex(tk6))){
            									case (int)2: {
HXLINE( 686)										::String _hx_switch_3 = tk6->_hx_getString(0);
            										if (  (_hx_switch_3==HX_("case",b0,1e,ba,41)) ||  (_hx_switch_3==HX_("default",c1,d8,c3,9b)) ){
HXLINE( 688)											goto _hx_goto_50;
HXDLIN( 688)											goto _hx_goto_51;
            										}
            										/* default */{
HXLINE( 690)											exprs1->push(this->parseFullExpr());
            										}
            										_hx_goto_51:;
            									}
            									break;
            									case (int)7: {
HXLINE( 688)										goto _hx_goto_50;
            									}
            									break;
            									default:{
HXLINE( 690)										exprs1->push(this->parseFullExpr());
            									}
            								}
            							}
            							_hx_goto_50:;
HXLINE( 693)							if ((exprs1->length == (int)1)) {
HXLINE( 694)								def = exprs1->__get((int)0).StaticCast<  ::hscript::Expr >();
            							}
            							else {
HXLINE( 695)								if ((exprs1->length == (int)0)) {
HXLINE( 696)									def = ::hscript::Expr_obj::EBlock(::Array_obj< ::Dynamic>::__new(0));
            								}
            								else {
HXLINE( 698)									 ::hscript::Expr e7 = exprs1->__get((exprs1->length - (int)1)).StaticCast<  ::hscript::Expr >();
HXDLIN( 698)									 ::Dynamic pmax1 = (int)0;
HXDLIN( 698)									def = ::hscript::Expr_obj::EBlock(exprs1);
            								}
            							}
HXLINE( 679)							goto _hx_goto_46;
            						}
            						/* default */{
HXLINE( 702)							this->unexpected(tk6);
            						}
            						_hx_goto_46:;
            					}
            					break;
            					case (int)7: {
HXLINE( 700)						goto _hx_goto_45;
            					}
            					break;
            					default:{
HXLINE( 702)						this->unexpected(tk6);
            					}
            				}
            			}
            			_hx_goto_45:;
HXLINE( 705)			return ::hscript::Expr_obj::ESwitch(e4,cases,def);
HXLINE( 639)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("throw",26,5d,90,0f)) ){
HXLINE( 620)			 ::hscript::Expr e8 = this->parseExpr();
HXLINE( 621)			return ::hscript::Expr_obj::EThrow(e8);
HXLINE( 619)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("try",3b,69,58,00)) ){
HXLINE( 623)			 ::hscript::Expr e9 = this->parseExpr();
HXLINE( 624)			 ::hscript::Token tk7 = this->token();
HXLINE( 625)			if (!(::Type_obj::enumEq(tk7,::hscript::Token_obj::TId(HX_("catch",3b,7c,21,41))))) {
HXLINE( 625)				this->unexpected(tk7);
            			}
HXLINE( 626)			{
HXLINE( 626)				 ::hscript::Token t7 = this->token();
HXDLIN( 626)				if (hx::IsNotEq( t7,::hscript::Token_obj::TPOpen_dyn() )) {
HXLINE( 626)					this->unexpected(t7);
            				}
            			}
HXLINE( 627)			::String vname1 = this->getIdent();
HXLINE( 628)			{
HXLINE( 628)				 ::hscript::Token t8 = this->token();
HXDLIN( 628)				if (hx::IsNotEq( t8,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 628)					this->unexpected(t8);
            				}
            			}
HXLINE( 629)			 ::hscript::CType t9 = null();
HXLINE( 630)			if (this->allowTypes) {
HXLINE( 631)				t9 = this->parseType();
            			}
            			else {
HXLINE( 633)				tk7 = this->token();
HXLINE( 634)				if (!(::Type_obj::enumEq(tk7,::hscript::Token_obj::TId(HX_("Dynamic",5f,c7,66,03))))) {
HXLINE( 634)					this->unexpected(tk7);
            				}
            			}
HXLINE( 636)			{
HXLINE( 636)				 ::hscript::Token t10 = this->token();
HXDLIN( 636)				if (hx::IsNotEq( t10,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 636)					this->unexpected(t10);
            				}
            			}
HXLINE( 637)			 ::hscript::Expr ec = this->parseExpr();
HXLINE( 638)			return ::hscript::Expr_obj::ETry(e9,vname1,t9,ec);
HXLINE( 622)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("var",e7,de,59,00)) ){
HXLINE( 506)			::String ident = this->getIdent();
HXLINE( 507)			 ::hscript::Token tk8 = this->token();
HXLINE( 508)			 ::hscript::CType t11 = null();
HXLINE( 509)			bool _hx_tmp2;
HXDLIN( 509)			if (hx::IsEq( tk8,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 509)				_hx_tmp2 = this->allowTypes;
            			}
            			else {
HXLINE( 509)				_hx_tmp2 = false;
            			}
HXDLIN( 509)			if (_hx_tmp2) {
HXLINE( 510)				t11 = this->parseType();
HXLINE( 511)				tk8 = this->token();
            			}
HXLINE( 513)			 ::hscript::Expr e10 = null();
HXLINE( 514)			if (::Type_obj::enumEq(tk8,::hscript::Token_obj::TOp(HX_("=",3d,00,00,00)))) {
HXLINE( 515)				e10 = this->parseExpr();
            			}
            			else {
HXLINE( 517)				 ::haxe::ds::GenericStack_hscript_Token _this7 = this->tokens;
HXDLIN( 517)				_this7->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk8,_this7->head);
            			}
HXLINE( 518)			return ::hscript::Expr_obj::EVar(ident,t11,e10);
HXLINE( 505)			goto _hx_goto_42;
            		}
            		if (  (_hx_switch_0==HX_("while",b1,43,bd,c9)) ){
HXLINE( 520)			 ::hscript::Expr econd1 = this->parseExpr();
HXLINE( 521)			 ::hscript::Expr e12 = this->parseExpr();
HXLINE( 522)			return ::hscript::Expr_obj::EWhile(econd1,e12);
HXLINE( 519)			goto _hx_goto_42;
            		}
            		/* default */{
HXLINE( 707)			return null();
            		}
            		_hx_goto_42:;
HXLINE( 485)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStructure,return )

 ::hscript::Expr Parser_obj::parseExprNext( ::hscript::Expr e1){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_711_parseExprNext)
HXLINE( 712)		 ::hscript::Token tk = this->token();
HXLINE( 713)		switch((int)(_hx_getEnumValueIndex(tk))){
            			case (int)3: {
HXLINE( 714)				::String op = tk->_hx_getString(0);
HXLINE( 715)				if (( (bool)(::haxe::IMap_obj::get(this->unops,op)) )) {
HXLINE( 716)					bool _hx_tmp;
HXDLIN( 716)					if (!(this->isBlock(e1))) {
HXLINE( 716)						if ((_hx_getEnumValueIndex(e1) == (int)3)) {
HXLINE( 716)							_hx_tmp = true;
            						}
            						else {
HXLINE( 716)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 716)						_hx_tmp = true;
            					}
HXDLIN( 716)					if (_hx_tmp) {
HXLINE( 717)						{
HXLINE( 717)							 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 717)							_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            						}
HXLINE( 718)						return e1;
            					}
HXLINE( 720)					return this->parseExprNext(::hscript::Expr_obj::EUnop(op,false,e1));
            				}
HXLINE( 722)				return this->makeBinop(op,e1,this->parseExpr());
            			}
            			break;
            			case (int)4: {
HXLINE( 727)				return this->parseExprNext(::hscript::Expr_obj::ECall(e1,this->parseExprList(::hscript::Token_obj::TPClose_dyn())));
            			}
            			break;
            			case (int)8: {
HXLINE( 724)				::String field = this->getIdent();
HXLINE( 725)				return this->parseExprNext(::hscript::Expr_obj::EField(e1,field));
            			}
            			break;
            			case (int)11: {
HXLINE( 729)				 ::hscript::Expr e2 = this->parseExpr();
HXLINE( 730)				{
HXLINE( 730)					 ::hscript::Token t = this->token();
HXDLIN( 730)					if (hx::IsNotEq( t,::hscript::Token_obj::TBkClose_dyn() )) {
HXLINE( 730)						this->unexpected(t);
            					}
            				}
HXLINE( 731)				return this->parseExprNext(::hscript::Expr_obj::EArray(e1,e2));
            			}
            			break;
            			case (int)13: {
HXLINE( 733)				 ::hscript::Expr e21 = this->parseExpr();
HXLINE( 734)				{
HXLINE( 734)					 ::hscript::Token t1 = this->token();
HXDLIN( 734)					if (hx::IsNotEq( t1,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 734)						this->unexpected(t1);
            					}
            				}
HXLINE( 735)				 ::hscript::Expr e3 = this->parseExpr();
HXLINE( 736)				return ::hscript::Expr_obj::ETernary(e1,e21,e3);
            			}
            			break;
            			default:{
HXLINE( 738)				{
HXLINE( 738)					 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 738)					_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this1->head);
            				}
HXLINE( 739)				return e1;
            			}
            		}
HXLINE( 713)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

 ::hscript::CType Parser_obj::parseType(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_743_parseType)
HXLINE( 744)		 ::hscript::Token t = this->token();
HXLINE( 745)		switch((int)(_hx_getEnumValueIndex(t))){
            			case (int)2: {
HXLINE( 746)				::String v = t->_hx_getString(0);
HXLINE( 747)				::Array< ::String > path = ::Array_obj< ::String >::__new(1)->init(0,v);
HXLINE( 748)				while(true){
HXLINE( 749)					t = this->token();
HXLINE( 750)					if (hx::IsNotEq( t,::hscript::Token_obj::TDot_dyn() )) {
HXLINE( 751)						goto _hx_goto_54;
            					}
HXLINE( 752)					path->push(this->getIdent());
            				}
            				_hx_goto_54:;
HXLINE( 754)				::Array< ::Dynamic> params = null();
HXLINE( 755)				if ((_hx_getEnumValueIndex(t) == (int)3)) {
HXLINE( 756)					::String op = t->_hx_getString(0);
HXLINE( 757)					if ((op == HX_("<",3c,00,00,00))) {
HXLINE( 758)						params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 759)						while(true){
HXLINE( 760)							params->push(this->parseType());
HXLINE( 761)							t = this->token();
HXLINE( 762)							switch((int)(_hx_getEnumValueIndex(t))){
            								case (int)3: {
HXLINE( 764)									::String op1 = t->_hx_getString(0);
HXDLIN( 764)									{
HXLINE( 765)										if ((op1 == HX_(">",3e,00,00,00))) {
HXLINE( 765)											goto _hx_goto_55;
            										}
HXLINE( 766)										if (hx::IsEq( op1.charCodeAt((int)0),(int)62 )) {
HXLINE( 770)											{
HXLINE( 770)												 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 770)												 ::hscript::Token item = ::hscript::Token_obj::TOp(op1.substr((int)1,null()));
HXDLIN( 770)												_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,item,_this->head);
            											}
HXLINE( 772)											goto _hx_goto_55;
            										}
            									}
            								}
            								break;
            								case (int)9: {
HXLINE( 763)									continue;
            								}
            								break;
            								default:{
            								}
            							}
HXLINE( 776)							this->unexpected(t);
            						}
            						_hx_goto_55:;
            					}
            					else {
HXLINE( 779)						 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 779)						_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this1->head);
            					}
            				}
            				else {
HXLINE( 781)					 ::haxe::ds::GenericStack_hscript_Token _this2 = this->tokens;
HXDLIN( 781)					_this2->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,t,_this2->head);
            				}
HXLINE( 783)				return this->parseTypeNext(::hscript::CType_obj::CTPath(path,params));
            			}
            			break;
            			case (int)4: {
HXLINE( 785)				 ::hscript::CType t1 = this->parseType();
HXLINE( 786)				{
HXLINE( 786)					 ::hscript::Token t2 = this->token();
HXDLIN( 786)					if (hx::IsNotEq( t2,::hscript::Token_obj::TPClose_dyn() )) {
HXLINE( 786)						this->unexpected(t2);
            					}
            				}
HXLINE( 787)				return this->parseTypeNext(::hscript::CType_obj::CTParent(t1));
            			}
            			break;
            			case (int)6: {
HXLINE( 789)				::Array< ::Dynamic> fields = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 790)				::Array< ::Dynamic> meta = null();
HXLINE( 791)				while(true){
HXLINE( 792)					t = this->token();
HXLINE( 793)					switch((int)(_hx_getEnumValueIndex(t))){
            						case (int)2: {
HXLINE( 793)							if ((t->_hx_getString(0) == HX_("var",e7,de,59,00))) {
HXLINE( 796)								::String name = this->getIdent();
HXLINE( 797)								{
HXLINE( 797)									 ::hscript::Token t3 = this->token();
HXDLIN( 797)									if (hx::IsNotEq( t3,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 797)										this->unexpected(t3);
            									}
            								}
HXLINE( 798)								fields->push( ::Dynamic(hx::Anon_obj::Create(3)
            									->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            									->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            									->setFixed(2,HX_("name",4b,72,ff,48),name)));
HXLINE( 799)								meta = null();
HXLINE( 800)								{
HXLINE( 800)									 ::hscript::Token t4 = this->token();
HXDLIN( 800)									if (hx::IsNotEq( t4,::hscript::Token_obj::TSemicolon_dyn() )) {
HXLINE( 800)										this->unexpected(t4);
            									}
            								}
            							}
            							else {
HXLINE( 801)								::String name1 = t->_hx_getString(0);
HXDLIN( 801)								{
HXLINE( 802)									{
HXLINE( 802)										 ::hscript::Token t5 = this->token();
HXDLIN( 802)										if (hx::IsNotEq( t5,::hscript::Token_obj::TDoubleDot_dyn() )) {
HXLINE( 802)											this->unexpected(t5);
            										}
            									}
HXLINE( 803)									fields->push( ::Dynamic(hx::Anon_obj::Create(3)
            										->setFixed(0,HX_("t",74,00,00,00),this->parseType())
            										->setFixed(1,HX_("meta",c5,4a,59,48),meta)
            										->setFixed(2,HX_("name",4b,72,ff,48),name1)));
HXLINE( 804)									t = this->token();
HXLINE( 805)									switch((int)(_hx_getEnumValueIndex(t))){
            										case (int)7: {
HXLINE( 807)											goto _hx_goto_56;
            										}
            										break;
            										case (int)9: {
            										}
            										break;
            										default:{
HXLINE( 808)											this->unexpected(t);
            										}
            									}
            								}
            							}
            						}
            						break;
            						case (int)7: {
HXLINE( 794)							goto _hx_goto_56;
            						}
            						break;
            						case (int)15: {
HXLINE( 810)							::String name2 = t->_hx_getString(0);
HXDLIN( 810)							{
HXLINE( 811)								if (hx::IsNull( meta )) {
HXLINE( 811)									meta = ::Array_obj< ::Dynamic>::__new(0);
            								}
HXLINE( 812)								meta->push( ::Dynamic(hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("params",46,fb,7a,ed),this->parseMetaArgs())
            									->setFixed(1,HX_("name",4b,72,ff,48),name2)));
            							}
            						}
            						break;
            						default:{
HXLINE( 814)							this->unexpected(t);
            						}
            					}
            				}
            				_hx_goto_56:;
HXLINE( 817)				return this->parseTypeNext(::hscript::CType_obj::CTAnon(fields));
            			}
            			break;
            			default:{
HXLINE( 819)				return this->unexpected(t);
            			}
            		}
HXLINE( 745)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

 ::hscript::CType Parser_obj::parseTypeNext( ::hscript::CType t){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_823_parseTypeNext)
HXLINE( 824)		 ::hscript::Token tk = this->token();
HXLINE( 825)		if ((_hx_getEnumValueIndex(tk) == (int)3)) {
HXLINE( 826)			::String op = tk->_hx_getString(0);
HXLINE( 827)			if ((op != HX_("->",71,27,00,00))) {
HXLINE( 828)				{
HXLINE( 828)					 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 828)					_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            				}
HXLINE( 829)				return t;
            			}
            		}
            		else {
HXLINE( 832)			{
HXLINE( 832)				 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN( 832)				_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this1->head);
            			}
HXLINE( 833)			return t;
            		}
HXLINE( 835)		 ::hscript::CType t2 = this->parseType();
HXLINE( 836)		if ((_hx_getEnumValueIndex(t2) == (int)1)) {
HXLINE( 837)			::Array< ::Dynamic> args = t2->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 838)			args->unshift(t);
HXLINE( 839)			return t2;
            		}
            		else {
HXLINE( 841)			return ::hscript::CType_obj::CTFun(::Array_obj< ::Dynamic>::__new(1)->init(0,t),t2);
            		}
HXLINE( 836)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

::Array< ::Dynamic> Parser_obj::parseExprList( ::hscript::Token etk){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_845_parseExprList)
HXLINE( 846)		::Array< ::Dynamic> args = ::Array_obj< ::Dynamic>::__new();
HXLINE( 847)		 ::hscript::Token tk = this->token();
HXLINE( 848)		if (hx::IsEq( tk,etk )) {
HXLINE( 849)			return args;
            		}
HXLINE( 850)		{
HXLINE( 850)			 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 850)			_this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,tk,_this->head);
            		}
HXLINE( 851)		while(true){
HXLINE( 852)			args->push(this->parseExpr());
HXLINE( 853)			tk = this->token();
HXLINE( 854)			if ((_hx_getEnumValueIndex(tk) != (int)9)) {
HXLINE( 857)				if (hx::IsEq( tk,etk )) {
HXLINE( 857)					goto _hx_goto_59;
            				}
HXLINE( 858)				this->unexpected(tk);
            			}
            		}
            		_hx_goto_59:;
HXLINE( 861)		return args;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

void Parser_obj::incPos(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_864_incPos)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,incPos,(void))

int Parser_obj::readChar(){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_872_readChar)
HXDLIN( 872)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXDLIN( 872)			return this->input->readByte();
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXDLIN( 872)				return (int)0;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN( 872)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString(int until){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_875_readString)
HXLINE( 876)		int c = (int)0;
HXLINE( 877)		 ::haxe::io::BytesOutput b =  ::haxe::io::BytesOutput_obj::__alloc( HX_CTX );
HXLINE( 878)		bool esc = false;
HXLINE( 879)		int old = this->line;
HXLINE( 880)		 ::haxe::io::Input s = this->input;
HXLINE( 884)		while(true){
HXLINE( 885)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 887)				c = s->readByte();
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
HXLINE( 889)					this->line = old;
HXLINE( 890)					HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedString_dyn());
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 892)			if (esc) {
HXLINE( 893)				esc = false;
HXLINE( 894)				switch((int)(c)){
            					case (int)34: case (int)39: case (int)92: {
HXLINE( 898)						b->writeByte(c);
            					}
            					break;
            					case (int)47: {
HXLINE( 899)						if (this->allowJSON) {
HXLINE( 899)							b->writeByte(c);
            						}
            						else {
HXLINE( 899)							this->invalidChar(c);
            						}
            					}
            					break;
            					case (int)110: {
HXLINE( 895)						b->writeByte((int)10);
            					}
            					break;
            					case (int)114: {
HXLINE( 896)						b->writeByte((int)13);
            					}
            					break;
            					case (int)116: {
HXLINE( 897)						b->writeByte((int)9);
            					}
            					break;
            					case (int)117: {
HXLINE( 901)						if (!(this->allowJSON)) {
HXLINE( 901)							this->invalidChar(c);
            						}
HXLINE( 902)						::String code = null();
HXLINE( 903)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 908)							code = s->readString((int)4);
            						}
            						catch( ::Dynamic _hx_e){
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic e1 = _hx_e;
HXLINE( 910)								this->line = old;
HXLINE( 911)								HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedString_dyn());
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
HXLINE( 913)						int k = (int)0;
HXLINE( 914)						{
HXLINE( 914)							int _g = (int)0;
HXDLIN( 914)							while((_g < (int)4)){
HXLINE( 914)								_g = (_g + (int)1);
HXDLIN( 914)								int i = (_g - (int)1);
HXLINE( 915)								k = ((int)k << (int)(int)4);
HXLINE( 916)								 ::Dynamic _hx_char = code.charCodeAt(i);
HXLINE( 917)								if (hx::IsNull( _hx_char )) {
HXLINE( 925)									this->invalidChar(_hx_char);
            								}
            								else {
HXLINE( 917)									 ::Dynamic _hx_switch_0 = _hx_char;
            									if (  (_hx_switch_0==(int)48) ||  (_hx_switch_0==(int)49) ||  (_hx_switch_0==(int)50) ||  (_hx_switch_0==(int)51) ||  (_hx_switch_0==(int)52) ||  (_hx_switch_0==(int)53) ||  (_hx_switch_0==(int)54) ||  (_hx_switch_0==(int)55) ||  (_hx_switch_0==(int)56) ||  (_hx_switch_0==(int)57) ){
HXLINE( 919)										k = (k + (_hx_char - (int)48));
HXDLIN( 919)										goto _hx_goto_65;
            									}
            									if (  (_hx_switch_0==(int)65) ||  (_hx_switch_0==(int)66) ||  (_hx_switch_0==(int)67) ||  (_hx_switch_0==(int)68) ||  (_hx_switch_0==(int)69) ||  (_hx_switch_0==(int)70) ){
HXLINE( 921)										k = (k + (_hx_char - (int)55));
HXDLIN( 921)										goto _hx_goto_65;
            									}
            									if (  (_hx_switch_0==(int)97) ||  (_hx_switch_0==(int)98) ||  (_hx_switch_0==(int)99) ||  (_hx_switch_0==(int)100) ||  (_hx_switch_0==(int)101) ||  (_hx_switch_0==(int)102) ){
HXLINE( 923)										k = (k + (_hx_char - (int)87));
HXDLIN( 923)										goto _hx_goto_65;
            									}
            									/* default */{
HXLINE( 925)										this->invalidChar(_hx_char);
            									}
            									_hx_goto_65:;
            								}
            							}
            						}
HXLINE( 929)						if ((k <= (int)127)) {
HXLINE( 930)							b->writeByte(k);
            						}
            						else {
HXLINE( 931)							if ((k <= (int)2047)) {
HXLINE( 932)								b->writeByte(((int)(int)192 | (int)((int)k >> (int)(int)6)));
HXLINE( 933)								b->writeByte(((int)(int)128 | (int)((int)k & (int)(int)63)));
            							}
            							else {
HXLINE( 935)								b->writeByte(((int)(int)224 | (int)((int)k >> (int)(int)12)));
HXLINE( 936)								b->writeByte(((int)(int)128 | (int)((int)((int)k >> (int)(int)6) & (int)(int)63)));
HXLINE( 937)								b->writeByte(((int)(int)128 | (int)((int)k & (int)(int)63)));
            							}
            						}
            					}
            					break;
            					default:{
HXLINE( 939)						this->invalidChar(c);
            					}
            				}
            			}
            			else {
HXLINE( 941)				if ((c == (int)92)) {
HXLINE( 942)					esc = true;
            				}
            				else {
HXLINE( 943)					if ((c == until)) {
HXLINE( 944)						goto _hx_goto_63;
            					}
            					else {
HXLINE( 946)						if ((c == (int)10)) {
HXLINE( 946)							this->line++;
            						}
HXLINE( 947)						b->writeByte(c);
            					}
            				}
            			}
            		}
            		_hx_goto_63:;
HXLINE( 950)		return b->getBytes()->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

 ::hscript::Token Parser_obj::token(){
            	HX_GC_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_953_token)
HXLINE( 971)		if (hx::IsNotNull( this->tokens->head )) {
HXLINE( 972)			 ::haxe::ds::GenericStack_hscript_Token _this = this->tokens;
HXDLIN( 972)			 ::haxe::ds::GenericCell_hscript_Token k = _this->head;
HXDLIN( 972)			if (hx::IsNull( k )) {
HXLINE( 972)				return null();
            			}
            			else {
HXLINE( 972)				_this->head = k->next;
HXDLIN( 972)				return k->elt;
            			}
            		}
HXLINE( 974)		int _hx_char;
HXLINE( 975)		if ((this->_hx_char < (int)0)) {
HXLINE( 976)			_hx_char = this->readChar();
            		}
            		else {
HXLINE( 978)			_hx_char = this->_hx_char;
HXLINE( 979)			this->_hx_char = (int)-1;
            		}
HXLINE( 981)		while(true){
HXLINE( 982)			switch((int)(_hx_char)){
            				case (int)0: {
HXLINE( 983)					return ::hscript::Token_obj::TEof_dyn();
            				}
            				break;
            				case (int)10: {
HXLINE( 988)					this->line++;
            				}
            				break;
            				case (int)9: case (int)13: case (int)32: {
            				}
            				break;
            				case (int)34: {
HXLINE(1094)					return ::hscript::Token_obj::TConst(::hscript::Const_obj::CString(this->readString((int)34)));
            				}
            				break;
            				case (int)39: {
HXLINE(1093)					return ::hscript::Token_obj::TConst(::hscript::Const_obj::CString(this->readString((int)39)));
            				}
            				break;
            				case (int)40: {
HXLINE(1060)					return ::hscript::Token_obj::TPOpen_dyn();
            				}
            				break;
            				case (int)41: {
HXLINE(1061)					return ::hscript::Token_obj::TPClose_dyn();
            				}
            				break;
            				case (int)44: {
HXLINE(1062)					return ::hscript::Token_obj::TComma_dyn();
            				}
            				break;
            				case (int)46: {
HXLINE(1064)					_hx_char = this->readChar();
HXLINE(1065)					switch((int)(_hx_char)){
            						case (int)46: {
HXLINE(1081)							_hx_char = this->readChar();
HXLINE(1082)							if ((_hx_char != (int)46)) {
HXLINE(1083)								this->invalidChar(_hx_char);
            							}
HXLINE(1084)							return ::hscript::Token_obj::TOp(HX_("...",ee,0f,23,00));
            						}
            						break;
            						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1067)							int n = (_hx_char - (int)48);
HXLINE(1068)							int exp = (int)1;
HXLINE(1069)							while(true){
HXLINE(1070)								_hx_char = this->readChar();
HXLINE(1071)								exp = (exp * (int)10);
HXLINE(1072)								switch((int)(_hx_char)){
            									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1074)										n = ((n * (int)10) + (_hx_char - (int)48));
            									}
            									break;
            									default:{
HXLINE(1076)										this->_hx_char = _hx_char;
HXLINE(1077)										return ::hscript::Token_obj::TConst(::hscript::Const_obj::CFloat(((Float)n / (Float)exp)));
            									}
            								}
            							}
            						}
            						break;
            						default:{
HXLINE(1086)							this->_hx_char = _hx_char;
HXLINE(1087)							return ::hscript::Token_obj::TDot_dyn();
            						}
            					}
            				}
            				break;
            				case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 993)					Float n1 = ((_hx_char - (int)48) * ((Float)1.0));
HXLINE( 994)					Float exp1 = ((Float)0.);
HXLINE( 995)					while(true){
HXLINE( 996)						_hx_char = this->readChar();
HXLINE( 997)						exp1 = (exp1 * (int)10);
HXLINE( 998)						switch((int)(_hx_char)){
            							case (int)46: {
HXLINE(1002)								if ((exp1 > (int)0)) {
HXLINE(1004)									bool _hx_tmp;
HXDLIN(1004)									if ((exp1 == (int)10)) {
HXLINE(1004)										_hx_tmp = (this->readChar() == (int)46);
            									}
            									else {
HXLINE(1004)										_hx_tmp = false;
            									}
HXDLIN(1004)									if (_hx_tmp) {
HXLINE(1005)										{
HXLINE(1005)											 ::haxe::ds::GenericStack_hscript_Token _this1 = this->tokens;
HXDLIN(1005)											_this1->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,::hscript::Token_obj::TOp(HX_("...",ee,0f,23,00)),_this1->head);
            										}
HXLINE(1006)										int i = ::Std_obj::_hx_int(n1);
HXLINE(1007)										 ::hscript::Const _hx_tmp1;
HXDLIN(1007)										if ((i == n1)) {
HXLINE(1007)											_hx_tmp1 = ::hscript::Const_obj::CInt(i);
            										}
            										else {
HXLINE(1007)											_hx_tmp1 = ::hscript::Const_obj::CFloat(n1);
            										}
HXDLIN(1007)										return ::hscript::Token_obj::TConst(_hx_tmp1);
            									}
HXLINE(1009)									this->invalidChar(_hx_char);
            								}
HXLINE(1011)								exp1 = ((Float)1.);
            							}
            							break;
            							case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1000)								n1 = ((n1 * (int)10) + (_hx_char - (int)48));
            							}
            							break;
            							case (int)120: {
HXLINE(1013)								bool _hx_tmp2;
HXDLIN(1013)								if (!((n1 > (int)0))) {
HXLINE(1013)									_hx_tmp2 = (exp1 > (int)0);
            								}
            								else {
HXLINE(1013)									_hx_tmp2 = true;
            								}
HXDLIN(1013)								if (_hx_tmp2) {
HXLINE(1014)									this->invalidChar(_hx_char);
            								}
HXLINE(1017)								int n2 = (int)0;
HXLINE(1018)								while(true){
HXLINE(1019)									_hx_char = this->readChar();
HXLINE(1020)									switch((int)(_hx_char)){
            										case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE(1022)											n2 = ((((int)n2 << (int)(int)4) + _hx_char) - (int)48);
            										}
            										break;
            										case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
HXLINE(1024)											n2 = (((int)n2 << (int)(int)4) + (_hx_char - (int)55));
            										}
            										break;
            										case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
HXLINE(1026)											n2 = (((int)n2 << (int)(int)4) + (_hx_char - (int)87));
            										}
            										break;
            										default:{
HXLINE(1028)											this->_hx_char = _hx_char;
HXLINE(1029)											return ::hscript::Token_obj::TConst(::hscript::Const_obj::CInt(n2));
            										}
            									}
            								}
            							}
            							break;
            							default:{
HXLINE(1054)								this->_hx_char = _hx_char;
HXLINE(1055)								int i1 = ::Std_obj::_hx_int(n1);
HXLINE(1056)								 ::hscript::Const _hx_tmp3;
HXDLIN(1056)								if ((exp1 > (int)0)) {
HXLINE(1056)									_hx_tmp3 = ::hscript::Const_obj::CFloat(((Float)(n1 * (int)10) / (Float)exp1));
            								}
            								else {
HXLINE(1056)									if ((i1 == n1)) {
HXLINE(1056)										_hx_tmp3 = ::hscript::Const_obj::CInt(i1);
            									}
            									else {
HXLINE(1056)										_hx_tmp3 = ::hscript::Const_obj::CFloat(n1);
            									}
            								}
HXDLIN(1056)								return ::hscript::Token_obj::TConst(_hx_tmp3);
            							}
            						}
            					}
            				}
            				break;
            				case (int)58: {
HXLINE(1096)					return ::hscript::Token_obj::TDoubleDot_dyn();
            				}
            				break;
            				case (int)59: {
HXLINE(1059)					return ::hscript::Token_obj::TSemicolon_dyn();
            				}
            				break;
            				case (int)61: {
HXLINE(1098)					_hx_char = this->readChar();
HXLINE(1099)					if ((_hx_char == (int)61)) {
HXLINE(1100)						return ::hscript::Token_obj::TOp(HX_("==",60,35,00,00));
            					}
            					else {
HXLINE(1101)						if ((_hx_char == (int)62)) {
HXLINE(1102)							return ::hscript::Token_obj::TOp(HX_("=>",61,35,00,00));
            						}
            					}
HXLINE(1103)					this->_hx_char = _hx_char;
HXLINE(1104)					return ::hscript::Token_obj::TOp(HX_("=",3d,00,00,00));
            				}
            				break;
            				case (int)63: {
HXLINE(1095)					return ::hscript::Token_obj::TQuestion_dyn();
            				}
            				break;
            				case (int)64: {
HXLINE(1106)					_hx_char = this->readChar();
HXLINE(1107)					bool _hx_tmp4;
HXDLIN(1107)					if (!(this->idents->__get(_hx_char))) {
HXLINE(1107)						_hx_tmp4 = (_hx_char == (int)58);
            					}
            					else {
HXLINE(1107)						_hx_tmp4 = true;
            					}
HXDLIN(1107)					if (_hx_tmp4) {
HXLINE(1108)						::String id = ::String::fromCharCode(_hx_char);
HXLINE(1109)						while(true){
HXLINE(1110)							_hx_char = this->readChar();
HXLINE(1111)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1112)								this->_hx_char = _hx_char;
HXLINE(1113)								return ::hscript::Token_obj::TMeta(id);
            							}
HXLINE(1115)							id = (id + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1118)					this->invalidChar(_hx_char);
            				}
            				break;
            				case (int)91: {
HXLINE(1091)					return ::hscript::Token_obj::TBkOpen_dyn();
            				}
            				break;
            				case (int)93: {
HXLINE(1092)					return ::hscript::Token_obj::TBkClose_dyn();
            				}
            				break;
            				case (int)123: {
HXLINE(1089)					return ::hscript::Token_obj::TBrOpen_dyn();
            				}
            				break;
            				case (int)125: {
HXLINE(1090)					return ::hscript::Token_obj::TBrClose_dyn();
            				}
            				break;
            				default:{
HXLINE(1120)					if (this->ops->__get(_hx_char)) {
HXLINE(1121)						::String op = ::String::fromCharCode(_hx_char);
HXLINE(1122)						int prev = (int)-1;
HXLINE(1123)						while(true){
HXLINE(1124)							_hx_char = this->readChar();
HXLINE(1125)							bool _hx_tmp5;
HXDLIN(1125)							if (!(!(this->ops->__get(_hx_char)))) {
HXLINE(1125)								_hx_tmp5 = (prev == (int)61);
            							}
            							else {
HXLINE(1125)								_hx_tmp5 = true;
            							}
HXDLIN(1125)							if (_hx_tmp5) {
HXLINE(1126)								if (hx::IsEq( op.charCodeAt((int)0),(int)47 )) {
HXLINE(1127)									return this->tokenComment(op,_hx_char);
            								}
HXLINE(1128)								this->_hx_char = _hx_char;
HXLINE(1129)								return ::hscript::Token_obj::TOp(op);
            							}
HXLINE(1131)							prev = _hx_char;
HXLINE(1132)							op = (op + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1135)					if (this->idents->__get(_hx_char)) {
HXLINE(1136)						::String id1 = ::String::fromCharCode(_hx_char);
HXLINE(1137)						while(true){
HXLINE(1138)							_hx_char = this->readChar();
HXLINE(1139)							if (!(this->idents->__get(_hx_char))) {
HXLINE(1140)								this->_hx_char = _hx_char;
HXLINE(1141)								return ::hscript::Token_obj::TId(id1);
            							}
HXLINE(1143)							id1 = (id1 + ::String::fromCharCode(_hx_char));
            						}
            					}
HXLINE(1146)					this->invalidChar(_hx_char);
            				}
            			}
HXLINE(1148)			_hx_char = this->readChar();
            		}
HXLINE( 981)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

 ::hscript::Token Parser_obj::tokenComment(::String op,int _hx_char){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1153_tokenComment)
HXLINE(1154)		 ::Dynamic c = op.charCodeAt((int)1);
HXLINE(1155)		 ::haxe::io::Input s = this->input;
HXLINE(1156)		if (hx::IsEq( c,(int)47 )) {
HXLINE(1157)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1158)				while(true){
HXLINE(1158)					bool _hx_tmp;
HXDLIN(1158)					if ((_hx_char != (int)13)) {
HXLINE(1158)						_hx_tmp = (_hx_char != (int)10);
            					}
            					else {
HXLINE(1158)						_hx_tmp = false;
            					}
HXDLIN(1158)					if (!(_hx_tmp)) {
HXLINE(1158)						goto _hx_goto_75;
            					}
HXLINE(1160)					_hx_char = s->readByte();
            				}
            				_hx_goto_75:;
HXLINE(1162)				this->_hx_char = _hx_char;
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1165)			return this->token();
            		}
HXLINE(1167)		if (hx::IsEq( c,(int)42 )) {
HXLINE(1168)			int old = this->line;
HXLINE(1169)			if ((op == HX_("/**/",a0,0a,31,1f))) {
HXLINE(1170)				this->_hx_char = _hx_char;
HXLINE(1171)				return this->token();
            			}
HXLINE(1173)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(1174)				while(true){
HXLINE(1175)					while((_hx_char != (int)42)){
HXLINE(1176)						if ((_hx_char == (int)10)) {
HXLINE(1176)							this->line++;
            						}
HXLINE(1178)						_hx_char = s->readByte();
            					}
HXLINE(1181)					_hx_char = s->readByte();
HXLINE(1182)					if ((_hx_char == (int)47)) {
HXLINE(1183)						goto _hx_goto_76;
            					}
            				}
            				_hx_goto_76:;
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e1 = _hx_e;
HXLINE(1186)					this->line = old;
HXLINE(1187)					HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedComment_dyn());
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE(1189)			return this->token();
            		}
HXLINE(1191)		this->_hx_char = _hx_char;
HXLINE(1192)		return ::hscript::Token_obj::TOp(op);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hscript::Const c){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1196_constString)
HXDLIN(1196)		switch((int)(_hx_getEnumValueIndex(c))){
            			case (int)0: {
HXLINE(1197)				int v = c->_hx_getInt(0);
HXDLIN(1197)				return ::Std_obj::string(v);
            			}
            			break;
            			case (int)1: {
HXLINE(1198)				Float f = c->_hx_getFloat(0);
HXDLIN(1198)				return ::Std_obj::string(f);
            			}
            			break;
            			case (int)2: {
HXLINE(1199)				::String s = c->_hx_getString(0);
HXDLIN(1199)				return s;
            			}
            			break;
            		}
HXLINE(1196)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hscript::Token t){
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_1207_tokenString)
HXDLIN(1207)		switch((int)(_hx_getEnumValueIndex(t))){
            			case (int)0: {
HXLINE(1208)				return HX_("<eof>",3e,ee,21,cf);
            			}
            			break;
            			case (int)1: {
HXLINE(1209)				 ::hscript::Const c = t->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXDLIN(1209)				return this->constString(c);
            			}
            			break;
            			case (int)2: {
HXLINE(1210)				::String s = t->_hx_getString(0);
HXDLIN(1210)				return s;
            			}
            			break;
            			case (int)3: {
HXLINE(1211)				::String s1 = t->_hx_getString(0);
HXDLIN(1211)				return s1;
            			}
            			break;
            			case (int)4: {
HXLINE(1212)				return HX_("(",28,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(1213)				return HX_(")",29,00,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE(1214)				return HX_("{",7b,00,00,00);
            			}
            			break;
            			case (int)7: {
HXLINE(1215)				return HX_("}",7d,00,00,00);
            			}
            			break;
            			case (int)8: {
HXLINE(1216)				return HX_(".",2e,00,00,00);
            			}
            			break;
            			case (int)9: {
HXLINE(1217)				return HX_(",",2c,00,00,00);
            			}
            			break;
            			case (int)10: {
HXLINE(1218)				return HX_(";",3b,00,00,00);
            			}
            			break;
            			case (int)11: {
HXLINE(1219)				return HX_("[",5b,00,00,00);
            			}
            			break;
            			case (int)12: {
HXLINE(1220)				return HX_("]",5d,00,00,00);
            			}
            			break;
            			case (int)13: {
HXLINE(1221)				return HX_("?",3f,00,00,00);
            			}
            			break;
            			case (int)14: {
HXLINE(1222)				return HX_(":",3a,00,00,00);
            			}
            			break;
            			case (int)15: {
HXLINE(1223)				::String id = t->_hx_getString(0);
HXDLIN(1223)				return (HX_("@",40,00,00,00) + id);
            			}
            			break;
            		}
HXLINE(1207)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )

int Parser_obj::p1;

int Parser_obj::readPos;

int Parser_obj::tokenMin;

int Parser_obj::tokenMax;


hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), true, "hscript.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(unops,"unops");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(unops,"unops");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(allowMetadata,"allowMetadata");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
}

hx::Val Parser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return hx::Val( mk_dyn() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return hx::Val( ops ); }
		if (HX_FIELD_EQ(inName,"uid") ) { return hx::Val( uid ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return hx::Val( line ); }
		if (HX_FIELD_EQ(inName,"char") ) { return hx::Val( _hx_char ); }
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"expr") ) { return hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return hx::Val( pmin_dyn() ); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return hx::Val( pmax_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { return hx::Val( unops ); }
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"token") ) { return hx::Val( token_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { return hx::Val( idents ); }
		if (HX_FIELD_EQ(inName,"tokens") ) { return hx::Val( tokens ); }
		if (HX_FIELD_EQ(inName,"ensure") ) { return hx::Val( ensure_dyn() ); }
		if (HX_FIELD_EQ(inName,"incPos") ) { return hx::Val( incPos_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return hx::Val( opChars ); }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return hx::Val( isBlock_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getIdent") ) { return hx::Val( getIdent_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapCompr") ) { return hx::Val( mapCompr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return hx::Val( makeUnop_dyn() ); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return hx::Val( readChar_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return hx::Val( allowJSON ); }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return hx::Val( parseExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return hx::Val( makeBinop_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return hx::Val( parseType_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return hx::Val( identChars ); }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return hx::Val( opPriority ); }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return hx::Val( allowTypes ); }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return hx::Val( unexpected_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return hx::Val( readString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return hx::Val( invalidChar_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return hx::Val( parseString_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return hx::Val( parseObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"constString") ) { return hx::Val( constString_dyn() ); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return hx::Val( tokenString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return hx::Val( opRightAssoc ); }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return hx::Val( tokenComment_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { return hx::Val( allowMetadata ); }
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return hx::Val( parseFullExpr_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseMetaArgs") ) { return hx::Val( parseMetaArgs_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return hx::Val( parseExprNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return hx::Val( parseTypeNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return hx::Val( parseExprList_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return hx::Val( parseStructure_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Parser_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { unops=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast<  ::haxe::ds::GenericStack_hscript_Token >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"allowMetadata") ) { allowMetadata=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	outFields->push(HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8"));
	outFields->push(HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee"));
	outFields->push(HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e"));
	outFields->push(HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02"));
	outFields->push(HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6"));
	outFields->push(HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1"));
	outFields->push(HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45"));
	outFields->push(HX_HCSTRING("allowMetadata","\x18","\x79","\xd4","\x10"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"));
	outFields->push(HX_HCSTRING("ops","\x32","\x9c","\x54","\x00"));
	outFields->push(HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2"));
	outFields->push(HX_HCSTRING("uid","\x90","\x23","\x59","\x00"));
	outFields->push(HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Parser_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Parser_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{hx::fsString,(int)offsetof(Parser_obj,opChars),HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8")},
	{hx::fsString,(int)offsetof(Parser_obj,identChars),HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opPriority),HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opRightAssoc),HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,unops),HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowMetadata),HX_HCSTRING("allowMetadata","\x18","\x79","\xd4","\x10")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Parser_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsInt,(int)offsetof(Parser_obj,_hx_char),HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,ops),HX_HCSTRING("ops","\x32","\x9c","\x54","\x00")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,idents),HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2")},
	{hx::fsInt,(int)offsetof(Parser_obj,uid),HX_HCSTRING("uid","\x90","\x23","\x59","\x00")},
	{hx::fsObject /*::haxe::ds::GenericStack_hscript_Token*/ ,(int)offsetof(Parser_obj,tokens),HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Parser_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Parser_obj::p1,HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")},
	{hx::fsInt,(void *) &Parser_obj::readPos,HX_HCSTRING("readPos","\xde","\x03","\xcf","\x02")},
	{hx::fsInt,(void *) &Parser_obj::tokenMin,HX_HCSTRING("tokenMin","\x19","\xa8","\x42","\x2b")},
	{hx::fsInt,(void *) &Parser_obj::tokenMax,HX_HCSTRING("tokenMax","\x2b","\xa1","\x42","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8"),
	HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee"),
	HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e"),
	HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02"),
	HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6"),
	HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1"),
	HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45"),
	HX_HCSTRING("allowMetadata","\x18","\x79","\xd4","\x10"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"),
	HX_HCSTRING("ops","\x32","\x9c","\x54","\x00"),
	HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2"),
	HX_HCSTRING("uid","\x90","\x23","\x59","\x00"),
	HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("invalidChar","\x6d","\xad","\xce","\xa9"),
	HX_HCSTRING("parseString","\x64","\xd5","\x6c","\x8c"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("unexpected","\xd1","\x15","\xf4","\xc5"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("ensure","\xbe","\xf5","\x7b","\x04"),
	HX_HCSTRING("getIdent","\x7a","\x52","\x50","\x17"),
	HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"),
	HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"),
	HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"),
	HX_HCSTRING("mk","\x5e","\x5f","\x00","\x00"),
	HX_HCSTRING("isBlock","\x03","\x19","\x82","\x51"),
	HX_HCSTRING("parseFullExpr","\xb7","\xbd","\x60","\x9c"),
	HX_HCSTRING("parseObject","\x52","\x2b","\x7c","\x90"),
	HX_HCSTRING("parseExpr","\x08","\x4f","\xc4","\xca"),
	HX_HCSTRING("parseMetaArgs","\x15","\x82","\x33","\x6e"),
	HX_HCSTRING("mapCompr","\x47","\xa4","\x9f","\xc1"),
	HX_HCSTRING("makeUnop","\xc8","\xc4","\x47","\x44"),
	HX_HCSTRING("makeBinop","\xda","\x90","\x98","\x86"),
	HX_HCSTRING("parseStructure","\x80","\x85","\x70","\x8b"),
	HX_HCSTRING("parseExprNext","\x1b","\x24","\xa8","\xf3"),
	HX_HCSTRING("parseType","\x8d","\x44","\xaf","\xd4"),
	HX_HCSTRING("parseTypeNext","\x20","\xc0","\xfc","\xfa"),
	HX_HCSTRING("parseExprList","\x86","\xbb","\x58","\xf2"),
	HX_HCSTRING("incPos","\x56","\xe7","\x39","\x93"),
	HX_HCSTRING("readChar","\x4c","\x39","\xb7","\x69"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("token","\xf9","\x82","\x2b","\x14"),
	HX_HCSTRING("tokenComment","\x66","\x60","\xfb","\x25"),
	HX_HCSTRING("constString","\x94","\x42","\x30","\xa9"),
	HX_HCSTRING("tokenString","\xaa","\x20","\xde","\xa4"),
	::String(null()) };

static void Parser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_MARK_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Parser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_VISIT_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#endif

hx::Class Parser_obj::__mClass;

static ::String Parser_obj_sStaticFields[] = {
	HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"),
	HX_HCSTRING("readPos","\xde","\x03","\xcf","\x02"),
	HX_HCSTRING("tokenMin","\x19","\xa8","\x42","\x2b"),
	HX_HCSTRING("tokenMax","\x2b","\xa1","\x42","\x2b"),
	::String(null())
};

void Parser_obj::__register()
{
	hx::Object *dummy = new Parser_obj;
	Parser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hscript.Parser","\x9a","\x9f","\xf2","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Parser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Parser_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Parser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Parser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Parser_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_94_boot)
HXDLIN(  94)		p1 = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_95_boot)
HXDLIN(  95)		readPos = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_96_boot)
HXDLIN(  96)		tokenMin = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2fd3d36595bebf3d_97_boot)
HXDLIN(  97)		tokenMax = (int)0;
            	}
}

} // end namespace hscript
