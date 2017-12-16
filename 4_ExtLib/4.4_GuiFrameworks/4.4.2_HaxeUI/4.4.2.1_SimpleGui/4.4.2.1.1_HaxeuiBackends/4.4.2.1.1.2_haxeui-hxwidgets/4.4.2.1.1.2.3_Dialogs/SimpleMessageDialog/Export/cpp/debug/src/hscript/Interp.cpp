// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript__Interp_Stop
#include <hscript/_Interp/Stop.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f37559d470356c9e_67_new,"hscript.Interp","new",0xf7e71101,"hscript.Interp.new","hscript/Interp.hx",67,0xf078416e)
HX_DEFINE_STACK_FRAME(_hx_pos_f37559d470356c9e_55_new,"hscript.Interp","new",0xf7e71101,"hscript.Interp.new","hscript/Interp.hx",55,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_76_posInfos,"hscript.Interp","posInfos",0x444859d0,"hscript.Interp.posInfos","hscript/Interp.hx",76,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_86_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",86,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_87_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",87,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_88_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",88,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_89_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",89,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_90_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",90,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_91_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",91,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_92_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",92,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_93_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",93,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_94_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",94,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_95_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",95,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_96_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",96,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_97_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",97,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_98_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",98,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_99_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",99,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_100_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",100,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_101_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",101,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_102_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",102,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_103_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",103,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_104_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",104,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_106_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",106,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_107_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",107,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_108_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",108,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_109_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",109,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_110_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",110,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_111_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",111,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_112_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",112,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_113_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",113,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_114_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",114,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_115_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",115,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_116_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",116,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_117_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",117,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_79_initOps,"hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",79,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_120_assign,"hscript.Interp","assign",0xca66602e,"hscript.Interp.assign","hscript/Interp.hx",120,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_149_assignOp,"hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",149,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_147_assignOp,"hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",147,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_152_evalAssignOp,"hscript.Interp","evalAssignOp",0xa46efc2b,"hscript.Interp.evalAssignOp","hscript/Interp.hx",152,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_188_increment,"hscript.Interp","increment",0x1e81f590,"hscript.Interp.increment","hscript/Interp.hx",188,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_235_execute,"hscript.Interp","execute",0xe1c3af56,"hscript.Interp.execute","hscript/Interp.hx",235,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_247_exprReturn,"hscript.Interp","exprReturn",0x8cfbf144,"hscript.Interp.exprReturn","hscript/Interp.hx",247,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_259_duplicate,"hscript.Interp","duplicate",0x8d9a10ec,"hscript.Interp.duplicate","hscript/Interp.hx",259,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_271_restore,"hscript.Interp","restore",0x80670c6f,"hscript.Interp.restore","hscript/Interp.hx",271,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_281_edef,"hscript.Interp","edef",0xec5412bf,"hscript.Interp.edef","hscript/Interp.hx",281,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_289_error,"hscript.Interp","error",0xe68736a9,"hscript.Interp.error","hscript/Interp.hx",289,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_294_resolve,"hscript.Interp","resolve",0x7d16b80d,"hscript.Interp.resolve","hscript/Interp.hx",294,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_304_expr,"hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",304,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_398_expr,"hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",398,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_569_doWhileLoop,"hscript.Interp","doWhileLoop",0x813d4b4b,"hscript.Interp.doWhileLoop","hscript/Interp.hx",569,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_586_whileLoop,"hscript.Interp","whileLoop",0xce1b3216,"hscript.Interp.whileLoop","hscript/Interp.hx",586,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_602_makeIterator,"hscript.Interp","makeIterator",0x634d013b,"hscript.Interp.makeIterator","hscript/Interp.hx",602,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_612_forLoop,"hscript.Interp","forLoop",0xdf1ff72e,"hscript.Interp.forLoop","hscript/Interp.hx",612,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_632_isMap,"hscript.Interp","isMap",0x34ae9fb3,"hscript.Interp.isMap","hscript/Interp.hx",632,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_636_getMapValue,"hscript.Interp","getMapValue",0x1594fb8c,"hscript.Interp.getMapValue","hscript/Interp.hx",636,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_640_setMapValue,"hscript.Interp","setMapValue",0x20020298,"hscript.Interp.setMapValue","hscript/Interp.hx",640,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_643_get,"hscript.Interp","get",0xf7e1c137,"hscript.Interp.get","hscript/Interp.hx",643,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_659_set,"hscript.Interp","set",0xf7eadc43,"hscript.Interp.set","hscript/Interp.hx",659,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_666_fcall,"hscript.Interp","fcall",0x6ff6aee5,"hscript.Interp.fcall","hscript/Interp.hx",666,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_670_call,"hscript.Interp","call",0xeaff64dd,"hscript.Interp.call","hscript/Interp.hx",670,0xf078416e)
HX_LOCAL_STACK_FRAME(_hx_pos_f37559d470356c9e_673_cnew,"hscript.Interp","cnew",0xeb093c1c,"hscript.Interp.cnew","hscript/Interp.hx",673,0xf078416e)
namespace hscript{

void Interp_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::hscript::Interp,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_67_new)
HXLINE(  67)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  67)			::String _hx_tmp1 = ::Std_obj::string(e);
HXDLIN(  67)			_hx_tmp(_hx_tmp1,_gthis->posInfos());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_55_new)
HXDLIN(  55)		 ::hscript::Interp _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  57)		this->variables =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  58)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  63)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE(  64)		this->variables->set(HX_("null",87,9e,0e,49),null());
HXLINE(  65)		this->variables->set(HX_("true",4e,a7,03,4d),true);
HXLINE(  66)		this->variables->set(HX_("false",a3,35,4f,fb),false);
HXLINE(  67)		this->variables->set(HX_("trace",85,8e,1f,16), ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  68)		this->initOps();
            	}

Dynamic Interp_obj::__CreateEmpty() { return new Interp_obj; }

void *Interp_obj::_hx_vtable = 0;

Dynamic Interp_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Interp_obj > _hx_result = new Interp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Interp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x005c6827;
}

 ::Dynamic Interp_obj::posInfos(){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_76_posInfos)
HXDLIN(  76)		return  ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fileName",e7,5a,43,62),HX_("hscript",73,8c,18,2c))
            			->setFixed(1,HX_("lineNumber",dd,81,22,76),(int)0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,posInfos,return )

void Interp_obj::initOps(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::hscript::Interp,me) HXARGC(2)
            		 ::Dynamic _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_86_initOps)
HXLINE(  86)			 ::Dynamic _hx_tmp = me->expr(e1);
HXDLIN(  86)			return (_hx_tmp + me->expr(e2));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::hscript::Expr e11, ::hscript::Expr e21){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_87_initOps)
HXLINE(  87)			 ::Dynamic _hx_tmp1 = me->expr(e11);
HXDLIN(  87)			return (_hx_tmp1 - me->expr(e21));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_2, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::hscript::Expr e12, ::hscript::Expr e22){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_88_initOps)
HXLINE(  88)			 ::Dynamic _hx_tmp2 = me->expr(e12);
HXDLIN(  88)			return (_hx_tmp2 * me->expr(e22));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_3, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::hscript::Expr e13, ::hscript::Expr e23){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_89_initOps)
HXLINE(  89)			 ::Dynamic _hx_tmp3 = me->expr(e13);
HXDLIN(  89)			return ((Float)_hx_tmp3 / (Float)me->expr(e23));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_4, ::hscript::Interp,me) HXARGC(2)
            		Float _hx_run( ::hscript::Expr e14, ::hscript::Expr e24){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_90_initOps)
HXLINE(  90)			 ::Dynamic _hx_tmp4 = me->expr(e14);
HXDLIN(  90)			return hx::Mod(_hx_tmp4,me->expr(e24));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_5, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e15, ::hscript::Expr e25){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_91_initOps)
HXLINE(  91)			 ::Dynamic _hx_tmp5 = me->expr(e15);
HXDLIN(  91)			return ((int)_hx_tmp5 & (int)me->expr(e25));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_6, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e16, ::hscript::Expr e26){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_92_initOps)
HXLINE(  92)			 ::Dynamic _hx_tmp6 = me->expr(e16);
HXDLIN(  92)			return ((int)_hx_tmp6 | (int)me->expr(e26));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_7, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e17, ::hscript::Expr e27){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_93_initOps)
HXLINE(  93)			 ::Dynamic _hx_tmp7 = me->expr(e17);
HXDLIN(  93)			return ((int)_hx_tmp7 ^ (int)me->expr(e27));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_8, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e18, ::hscript::Expr e28){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_94_initOps)
HXLINE(  94)			 ::Dynamic _hx_tmp8 = me->expr(e18);
HXDLIN(  94)			return ((int)_hx_tmp8 << (int)me->expr(e28));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_9, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e19, ::hscript::Expr e29){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_95_initOps)
HXLINE(  95)			 ::Dynamic _hx_tmp9 = me->expr(e19);
HXDLIN(  95)			return ((int)_hx_tmp9 >> (int)me->expr(e29));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_10, ::hscript::Interp,me) HXARGC(2)
            		int _hx_run( ::hscript::Expr e110, ::hscript::Expr e210){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_96_initOps)
HXLINE(  96)			 ::Dynamic _hx_tmp10 = me->expr(e110);
HXDLIN(  96)			return hx::UShr(_hx_tmp10,me->expr(e210));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_11, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e111, ::hscript::Expr e211){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_97_initOps)
HXLINE(  97)			 ::Dynamic _hx_tmp11 = me->expr(e111);
HXDLIN(  97)			return hx::IsEq( _hx_tmp11,me->expr(e211) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_12, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e112, ::hscript::Expr e212){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_98_initOps)
HXLINE(  98)			 ::Dynamic _hx_tmp12 = me->expr(e112);
HXDLIN(  98)			return hx::IsNotEq( _hx_tmp12,me->expr(e212) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_13, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e113, ::hscript::Expr e213){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_99_initOps)
HXLINE(  99)			 ::Dynamic _hx_tmp13 = me->expr(e113);
HXDLIN(  99)			return hx::IsGreaterEq( _hx_tmp13,me->expr(e213) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_14, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e114, ::hscript::Expr e214){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_100_initOps)
HXLINE( 100)			 ::Dynamic _hx_tmp14 = me->expr(e114);
HXDLIN( 100)			return hx::IsLessEq( _hx_tmp14,me->expr(e214) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_15, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e115, ::hscript::Expr e215){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_101_initOps)
HXLINE( 101)			 ::Dynamic _hx_tmp15 = me->expr(e115);
HXDLIN( 101)			return hx::IsGreater( _hx_tmp15,me->expr(e215) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_16, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e116, ::hscript::Expr e216){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_102_initOps)
HXLINE( 102)			 ::Dynamic _hx_tmp16 = me->expr(e116);
HXDLIN( 102)			return hx::IsLess( _hx_tmp16,me->expr(e216) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_17, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e117, ::hscript::Expr e217){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_103_initOps)
HXLINE( 103)			if (hx::IsNotEq( me->expr(e117),true )) {
HXLINE( 103)				return hx::IsEq( me->expr(e217),true );
            			}
            			else {
HXLINE( 103)				return true;
            			}
HXDLIN( 103)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_18, ::hscript::Interp,me) HXARGC(2)
            		bool _hx_run( ::hscript::Expr e118, ::hscript::Expr e218){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_104_initOps)
HXLINE( 104)			if (hx::IsEq( me->expr(e118),true )) {
HXLINE( 104)				return hx::IsEq( me->expr(e218),true );
            			}
            			else {
HXLINE( 104)				return false;
            			}
HXDLIN( 104)			return false;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_19, ::hscript::Interp,me) HXARGC(2)
            		 ::IntIterator _hx_run( ::hscript::Expr e119, ::hscript::Expr e219){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_106_initOps)
HXLINE( 106)			 ::Dynamic _hx_tmp17 = me->expr(e119);
HXDLIN( 106)			return  ::IntIterator_obj::__alloc( HX_CTX ,_hx_tmp17,me->expr(e219));
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_20) HXARGC(2)
            		 ::Dynamic _hx_run( ::Dynamic v1, ::Dynamic v2){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_107_initOps)
HXLINE( 107)			return (v1 + v2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_21) HXARGC(2)
            		Float _hx_run(Float v11,Float v21){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_108_initOps)
HXLINE( 108)			return (v11 - v21);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_22) HXARGC(2)
            		Float _hx_run(Float v12,Float v22){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_109_initOps)
HXLINE( 109)			return (v12 * v22);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_23) HXARGC(2)
            		Float _hx_run(Float v13,Float v23){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_110_initOps)
HXLINE( 110)			return ((Float)v13 / (Float)v23);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_24) HXARGC(2)
            		Float _hx_run(Float v14,Float v24){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_111_initOps)
HXLINE( 111)			return hx::Mod(v14,v24);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_25) HXARGC(2)
            		int _hx_run(int v15,int v25){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_112_initOps)
HXLINE( 112)			return ((int)v15 & (int)v25);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_26) HXARGC(2)
            		int _hx_run(int v16,int v26){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_113_initOps)
HXLINE( 113)			return ((int)v16 | (int)v26);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_27) HXARGC(2)
            		int _hx_run(int v17,int v27){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_114_initOps)
HXLINE( 114)			return ((int)v17 ^ (int)v27);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_28) HXARGC(2)
            		int _hx_run(int v18,int v28){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_115_initOps)
HXLINE( 115)			return ((int)v18 << (int)v28);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_29) HXARGC(2)
            		int _hx_run(int v19,int v29){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_116_initOps)
HXLINE( 116)			return ((int)v19 >> (int)v29);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_30) HXARGC(2)
            		int _hx_run(int v110,int v210){
            			HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_117_initOps)
HXLINE( 117)			return hx::UShr(v110,v210);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_79_initOps)
HXLINE(  80)		 ::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);
HXLINE(  82)		this->binops =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  86)		this->binops->set(HX_("+",2b,00,00,00), ::Dynamic(new _hx_Closure_0(me)));
HXLINE(  87)		this->binops->set(HX_("-",2d,00,00,00), ::Dynamic(new _hx_Closure_1(me)));
HXLINE(  88)		this->binops->set(HX_("*",2a,00,00,00), ::Dynamic(new _hx_Closure_2(me)));
HXLINE(  89)		this->binops->set(HX_("/",2f,00,00,00), ::Dynamic(new _hx_Closure_3(me)));
HXLINE(  90)		this->binops->set(HX_("%",25,00,00,00), ::Dynamic(new _hx_Closure_4(me)));
HXLINE(  91)		this->binops->set(HX_("&",26,00,00,00), ::Dynamic(new _hx_Closure_5(me)));
HXLINE(  92)		this->binops->set(HX_("|",7c,00,00,00), ::Dynamic(new _hx_Closure_6(me)));
HXLINE(  93)		this->binops->set(HX_("^",5e,00,00,00), ::Dynamic(new _hx_Closure_7(me)));
HXLINE(  94)		this->binops->set(HX_("<<",80,34,00,00), ::Dynamic(new _hx_Closure_8(me)));
HXLINE(  95)		this->binops->set(HX_(">>",40,36,00,00), ::Dynamic(new _hx_Closure_9(me)));
HXLINE(  96)		this->binops->set(HX_(">>>",fe,41,2f,00), ::Dynamic(new _hx_Closure_10(me)));
HXLINE(  97)		this->binops->set(HX_("==",60,35,00,00), ::Dynamic(new _hx_Closure_11(me)));
HXLINE(  98)		this->binops->set(HX_("!=",fc,1c,00,00), ::Dynamic(new _hx_Closure_12(me)));
HXLINE(  99)		this->binops->set(HX_(">=",3f,36,00,00), ::Dynamic(new _hx_Closure_13(me)));
HXLINE( 100)		this->binops->set(HX_("<=",81,34,00,00), ::Dynamic(new _hx_Closure_14(me)));
HXLINE( 101)		this->binops->set(HX_(">",3e,00,00,00), ::Dynamic(new _hx_Closure_15(me)));
HXLINE( 102)		this->binops->set(HX_("<",3c,00,00,00), ::Dynamic(new _hx_Closure_16(me)));
HXLINE( 103)		this->binops->set(HX_("||",80,6c,00,00), ::Dynamic(new _hx_Closure_17(me)));
HXLINE( 104)		this->binops->set(HX_("&&",40,21,00,00), ::Dynamic(new _hx_Closure_18(me)));
HXLINE( 105)		this->binops->set(HX_("=",3d,00,00,00),this->assign_dyn());
HXLINE( 106)		this->binops->set(HX_("...",ee,0f,23,00), ::Dynamic(new _hx_Closure_19(me)));
HXLINE( 107)		this->assignOp(HX_("+=",b2,25,00,00), ::Dynamic(new _hx_Closure_20()));
HXLINE( 108)		this->assignOp(HX_("-=",70,27,00,00), ::Dynamic(new _hx_Closure_21()));
HXLINE( 109)		this->assignOp(HX_("*=",d3,24,00,00), ::Dynamic(new _hx_Closure_22()));
HXLINE( 110)		this->assignOp(HX_("/=",2e,29,00,00), ::Dynamic(new _hx_Closure_23()));
HXLINE( 111)		this->assignOp(HX_("%=",78,20,00,00), ::Dynamic(new _hx_Closure_24()));
HXLINE( 112)		this->assignOp(HX_("&=",57,21,00,00), ::Dynamic(new _hx_Closure_25()));
HXLINE( 113)		this->assignOp(HX_("|=",41,6c,00,00), ::Dynamic(new _hx_Closure_26()));
HXLINE( 114)		this->assignOp(HX_("^=",1f,52,00,00), ::Dynamic(new _hx_Closure_27()));
HXLINE( 115)		this->assignOp(HX_("<<=",bd,bb,2d,00), ::Dynamic(new _hx_Closure_28()));
HXLINE( 116)		this->assignOp(HX_(">>=",fd,41,2f,00), ::Dynamic(new _hx_Closure_29()));
HXLINE( 117)		this->assignOp(HX_(">>>=",7f,7c,2a,29), ::Dynamic(new _hx_Closure_30()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,initOps,(void))

 ::Dynamic Interp_obj::assign( ::hscript::Expr e1, ::hscript::Expr e2){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_120_assign)
HXLINE( 121)		 ::Dynamic v = this->expr(e2);
HXLINE( 122)		switch((int)(_hx_getEnumValueIndex(e1))){
            			case (int)1: {
HXLINE( 123)				::String id = e1->_hx_getString(0);
HXDLIN( 123)				{
HXLINE( 124)					 ::Dynamic l = ::haxe::IMap_obj::get(this->locals,id);
HXLINE( 125)					if (hx::IsNull( l )) {
HXLINE( 126)						::haxe::IMap_obj::set(this->variables,id,v);
            					}
            					else {
HXLINE( 128)						l->__SetField(HX_("r",72,00,00,00),v,hx::paccDynamic);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 129)				::String f = e1->_hx_getString(1);
HXDLIN( 129)				 ::hscript::Expr e = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 130)				v = this->set(this->expr(e),f,v);
            			}
            			break;
            			case (int)16: {
HXLINE( 131)				 ::hscript::Expr index = e1->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 131)				 ::hscript::Expr e3 = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 131)				{
HXLINE( 132)					 ::Dynamic arr = this->expr(e3);
HXLINE( 133)					 ::Dynamic index1 = this->expr(index);
HXLINE( 134)					if (::Std_obj::is(arr,hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 135)						::haxe::IMap_obj::set(arr,index1,v);
            					}
            					else {
HXLINE( 138)						arr->__SetItem(( (int)(index1) ),v);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 142)				HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(HX_("=",3d,00,00,00)));
            			}
            		}
HXLINE( 144)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assign,return )

void Interp_obj::assignOp(::String op, ::Dynamic fop){
            		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0,::String,op, ::hscript::Interp,me, ::Dynamic,fop) HXARGC(2)
            		 ::Dynamic _hx_run( ::hscript::Expr e1, ::hscript::Expr e2){
            			HX_STACKFRAME(&_hx_pos_f37559d470356c9e_149_assignOp)
HXLINE( 149)			return me->evalAssignOp(op,fop,e1,e2);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_147_assignOp)
HXLINE( 148)		 ::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);
HXLINE( 149)		this->binops->set(op, ::Dynamic(new _hx_Closure_0(op,me,fop)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assignOp,(void))

 ::Dynamic Interp_obj::evalAssignOp(::String op, ::Dynamic fop, ::hscript::Expr e1, ::hscript::Expr e2){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_152_evalAssignOp)
HXLINE( 153)		 ::Dynamic v;
HXLINE( 154)		switch((int)(_hx_getEnumValueIndex(e1))){
            			case (int)1: {
HXLINE( 155)				::String id = e1->_hx_getString(0);
HXDLIN( 155)				{
HXLINE( 156)					 ::Dynamic l = ::haxe::IMap_obj::get(this->locals,id);
HXLINE( 157)					 ::Dynamic v1 = this->expr(e1);
HXDLIN( 157)					v = fop(v1,this->expr(e2));
HXLINE( 158)					if (hx::IsNull( l )) {
HXLINE( 159)						::haxe::IMap_obj::set(this->variables,id,v);
            					}
            					else {
HXLINE( 161)						l->__SetField(HX_("r",72,00,00,00),v,hx::paccDynamic);
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 162)				::String f = e1->_hx_getString(1);
HXDLIN( 162)				 ::hscript::Expr e = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 162)				{
HXLINE( 163)					 ::Dynamic obj = this->expr(e);
HXLINE( 164)					 ::Dynamic v2 = this->get(obj,f);
HXDLIN( 164)					v = fop(v2,this->expr(e2));
HXLINE( 165)					v = this->set(obj,f,v);
            				}
            			}
            			break;
            			case (int)16: {
HXLINE( 166)				 ::hscript::Expr index = e1->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 166)				 ::hscript::Expr e3 = e1->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 166)				{
HXLINE( 167)					 ::Dynamic arr = this->expr(e3);
HXLINE( 168)					 ::Dynamic index1 = this->expr(index);
HXLINE( 169)					if (::Std_obj::is(arr,hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 170)						 ::Dynamic v3 = ::haxe::IMap_obj::get(arr,index1);
HXDLIN( 170)						v = fop(v3,this->expr(e2));
HXLINE( 171)						::haxe::IMap_obj::set(arr,index1,v);
            					}
            					else {
HXLINE( 174)						 ::Dynamic arr1 = arr->__GetItem(( (int)(index1) ));
HXDLIN( 174)						v = fop(arr1,this->expr(e2));
HXLINE( 175)						arr->__SetItem(( (int)(index1) ),v);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 178)				HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(op));
            			}
            		}
HXLINE( 180)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,evalAssignOp,return )

 ::Dynamic Interp_obj::increment( ::hscript::Expr e,bool prefix,int delta){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_188_increment)
HXDLIN( 188)		switch((int)(_hx_getEnumValueIndex(e))){
            			case (int)1: {
HXLINE( 189)				::String id = e->_hx_getString(0);
HXLINE( 190)				 ::Dynamic l = ::haxe::IMap_obj::get(this->locals,id);
HXLINE( 191)				 ::Dynamic v;
HXDLIN( 191)				if (hx::IsNull( l )) {
HXLINE( 191)					v = ::haxe::IMap_obj::get(this->variables,id);
            				}
            				else {
HXLINE( 191)					v =  ::Dynamic(l->__Field(HX_("r",72,00,00,00),hx::paccDynamic));
            				}
HXLINE( 192)				if (prefix) {
HXLINE( 193)					v = (v + delta);
HXLINE( 194)					if (hx::IsNull( l )) {
HXLINE( 194)						::haxe::IMap_obj::set(this->variables,id,v);
            					}
            					else {
HXLINE( 194)						l->__SetField(HX_("r",72,00,00,00),v,hx::paccDynamic);
            					}
            				}
            				else {
HXLINE( 196)					if (hx::IsNull( l )) {
HXLINE( 196)						::haxe::IMap_obj::set(this->variables,id,(v + delta));
            					}
            					else {
HXLINE( 196)						l->__SetField(HX_("r",72,00,00,00),(v + delta),hx::paccDynamic);
            					}
            				}
HXLINE( 197)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 198)				::String f = e->_hx_getString(1);
HXDLIN( 198)				 ::hscript::Expr e1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 199)				 ::Dynamic obj = this->expr(e1);
HXLINE( 200)				 ::Dynamic v1 = this->get(obj,f);
HXLINE( 201)				if (prefix) {
HXLINE( 202)					v1 = (v1 + delta);
HXLINE( 203)					this->set(obj,f,v1);
            				}
            				else {
HXLINE( 205)					this->set(obj,f,(v1 + delta));
            				}
HXLINE( 206)				return v1;
            			}
            			break;
            			case (int)16: {
HXLINE( 207)				 ::hscript::Expr index = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 207)				 ::hscript::Expr e2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 208)				 ::Dynamic arr = this->expr(e2);
HXLINE( 209)				 ::Dynamic index1 = this->expr(index);
HXLINE( 210)				if (::Std_obj::is(arr,hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 211)					int v2 = ( (int)(::haxe::IMap_obj::get(arr,index1)) );
HXLINE( 212)					if (prefix) {
HXLINE( 213)						v2 = (v2 + delta);
HXLINE( 214)						::haxe::IMap_obj::set(arr,index1,v2);
            					}
            					else {
HXLINE( 217)						::Dynamic _hx_tmp = arr;
HXDLIN( 217)						::haxe::IMap_obj::set(_hx_tmp,index1,(v2 + delta));
            					}
HXLINE( 219)					return v2;
            				}
            				else {
HXLINE( 222)					int v3 = ( (int)(arr->__GetItem(( (int)(index1) ))) );
HXLINE( 223)					if (prefix) {
HXLINE( 224)						v3 = (v3 + delta);
HXLINE( 225)						arr->__SetItem(( (int)(index1) ),v3);
            					}
            					else {
HXLINE( 227)						arr->__SetItem(( (int)(index1) ),(v3 + delta));
            					}
HXLINE( 228)					return v3;
            				}
            			}
            			break;
            			default:{
HXLINE( 231)				::String e3;
HXDLIN( 231)				if ((delta > (int)0)) {
HXLINE( 231)					e3 = HX_("++",a0,25,00,00);
            				}
            				else {
HXLINE( 231)					e3 = HX_("--",60,27,00,00);
            				}
HXDLIN( 231)				HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(e3));
            			}
            		}
HXLINE( 188)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,increment,return )

 ::Dynamic Interp_obj::execute( ::hscript::Expr expr){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_235_execute)
HXLINE( 236)		this->depth = (int)0;
HXLINE( 238)		this->locals =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 242)		this->declared = ::Array_obj< ::Dynamic>::__new();
HXLINE( 243)		return this->exprReturn(expr);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,execute,return )

 ::Dynamic Interp_obj::exprReturn( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_247_exprReturn)
HXDLIN( 247)		try {
            			HX_STACK_CATCHABLE( ::hscript::_Interp::Stop, 0);
HXLINE( 248)			return this->expr(e);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::hscript::_Interp::Stop >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::hscript::_Interp::Stop e1 = _hx_e;
HXLINE( 250)				switch((int)(_hx_getEnumValueIndex(e1))){
            					case (int)0: {
HXLINE( 251)						HX_STACK_DO_THROW(HX_("Invalid break",b6,ee,24,9d));
            					}
            					break;
            					case (int)1: {
HXLINE( 252)						HX_STACK_DO_THROW(HX_("Invalid continue",d0,6a,b7,3f));
            					}
            					break;
            					case (int)2: {
HXLINE( 253)						 ::Dynamic v = e1->_hx_getObject(0);
HXDLIN( 253)						return v;
            					}
            					break;
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 247)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,exprReturn,return )

 ::haxe::ds::StringMap Interp_obj::duplicate( ::haxe::ds::StringMap h){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_259_duplicate)
HXLINE( 261)		 ::haxe::ds::StringMap h2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 265)		{
HXLINE( 265)			 ::Dynamic k = h->keys();
HXDLIN( 265)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 265)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 266)				h2->set(k1,h->get(k1));
            			}
            		}
HXLINE( 267)		return h2;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,duplicate,return )

void Interp_obj::restore(int old){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_271_restore)
HXDLIN( 271)		while((this->declared->length > old)){
HXLINE( 272)			 ::Dynamic d = this->declared->pop();
HXLINE( 273)			this->locals->set(( (::String)(d->__Field(HX_("n",6e,00,00,00),hx::paccDynamic)) ), ::Dynamic(d->__Field(HX_("old",a7,98,54,00),hx::paccDynamic)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,restore,(void))

 ::hscript::Expr Interp_obj::edef( ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_281_edef)
HXDLIN( 281)		return e;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,edef,return )

 ::Dynamic Interp_obj::error( ::hscript::Error e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_289_error)
HXDLIN( 289)		HX_STACK_DO_THROW(e);
HXDLIN( 289)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,error,return )

 ::Dynamic Interp_obj::resolve(::String id){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_294_resolve)
HXLINE( 295)		 ::Dynamic l = this->locals->get(id);
HXLINE( 296)		if (hx::IsNotNull( l )) {
HXLINE( 297)			return  ::Dynamic(l->__Field(HX_("r",72,00,00,00),hx::paccDynamic));
            		}
HXLINE( 298)		 ::Dynamic v = this->variables->get(id);
HXLINE( 299)		bool _hx_tmp;
HXDLIN( 299)		if (hx::IsNull( v )) {
HXLINE( 299)			_hx_tmp = !(this->variables->exists(id));
            		}
            		else {
HXLINE( 299)			_hx_tmp = false;
            		}
HXDLIN( 299)		if (_hx_tmp) {
HXLINE( 300)			HX_STACK_DO_THROW(::hscript::Error_obj::EUnknownVariable(id));
            		}
HXLINE( 301)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,resolve,return )

 ::Dynamic Interp_obj::expr( ::hscript::Expr e){
            	HX_GC_STACKFRAME(&_hx_pos_f37559d470356c9e_304_expr)
HXDLIN( 304)		 ::hscript::Interp _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 309)		switch((int)(_hx_getEnumValueIndex(e))){
            			case (int)0: {
HXLINE( 310)				 ::hscript::Const c = e->_hx_getObject(0).StaticCast<  ::hscript::Const >();
HXLINE( 311)				switch((int)(_hx_getEnumValueIndex(c))){
            					case (int)0: {
HXLINE( 312)						int v = c->_hx_getInt(0);
HXDLIN( 312)						return v;
            					}
            					break;
            					case (int)1: {
HXLINE( 313)						Float f = c->_hx_getFloat(0);
HXDLIN( 313)						return f;
            					}
            					break;
            					case (int)2: {
HXLINE( 314)						::String s = c->_hx_getString(0);
HXDLIN( 314)						return s;
            					}
            					break;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 319)				::String id = e->_hx_getString(0);
HXLINE( 320)				return this->resolve(id);
            			}
            			break;
            			case (int)2: {
HXLINE( 321)				 ::hscript::Expr e1 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 321)				::String n = e->_hx_getString(0);
HXLINE( 322)				::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 322)				_hx_tmp->push( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("n",6e,00,00,00),n)
            					->setFixed(1,HX_("old",a7,98,54,00),::haxe::IMap_obj::get(this->locals,n))));
HXLINE( 323)				{
HXLINE( 323)					::Dynamic this1 = this->locals;
HXDLIN( 323)					 ::Dynamic value;
HXDLIN( 323)					if (hx::IsNull( e1 )) {
HXLINE( 323)						value = null();
            					}
            					else {
HXLINE( 323)						value = this->expr(e1);
            					}
HXDLIN( 323)					::haxe::IMap_obj::set(this1,n, ::Dynamic(hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("r",72,00,00,00),value)));
            				}
HXLINE( 324)				return null();
            			}
            			break;
            			case (int)3: {
HXLINE( 325)				 ::hscript::Expr e2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 326)				return this->expr(e2);
            			}
            			break;
            			case (int)4: {
HXLINE( 327)				::Array< ::Dynamic> exprs = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 328)				int old = this->declared->length;
HXLINE( 329)				 ::Dynamic v1 = null();
HXLINE( 330)				{
HXLINE( 330)					int _g = (int)0;
HXDLIN( 330)					while((_g < exprs->length)){
HXLINE( 330)						 ::hscript::Expr e3 = exprs->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN( 330)						_g = (_g + (int)1);
HXLINE( 331)						v1 = this->expr(e3);
            					}
            				}
HXLINE( 332)				this->restore(old);
HXLINE( 333)				return v1;
            			}
            			break;
            			case (int)5: {
HXLINE( 334)				::String f1 = e->_hx_getString(1);
HXDLIN( 334)				 ::hscript::Expr e4 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 335)				return this->get(this->expr(e4),f1);
            			}
            			break;
            			case (int)6: {
HXLINE( 336)				 ::hscript::Expr e21 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 336)				 ::hscript::Expr e11 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 336)				::String op = e->_hx_getString(0);
HXLINE( 337)				 ::Dynamic fop = ::haxe::IMap_obj::get(this->binops,op);
HXLINE( 338)				if (hx::IsNull( fop )) {
HXLINE( 338)					HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(op));
            				}
HXLINE( 339)				return fop(e11,e21);
            			}
            			break;
            			case (int)7: {
HXLINE( 340)				 ::hscript::Expr e5 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 340)				bool prefix = e->_hx_getBool(1);
HXDLIN( 340)				::String op1 = e->_hx_getString(0);
HXLINE( 341)				::String _hx_switch_0 = op1;
            				if (  (_hx_switch_0==HX_("!",21,00,00,00)) ){
HXLINE( 343)					return hx::IsNotEq( this->expr(e5),true );
HXDLIN( 343)					goto _hx_goto_50;
            				}
            				if (  (_hx_switch_0==HX_("++",a0,25,00,00)) ){
HXLINE( 347)					return this->increment(e5,prefix,(int)1);
HXDLIN( 347)					goto _hx_goto_50;
            				}
            				if (  (_hx_switch_0==HX_("-",2d,00,00,00)) ){
HXLINE( 345)					return -(this->expr(e5));
HXDLIN( 345)					goto _hx_goto_50;
            				}
            				if (  (_hx_switch_0==HX_("--",60,27,00,00)) ){
HXLINE( 349)					return this->increment(e5,prefix,(int)-1);
HXDLIN( 349)					goto _hx_goto_50;
            				}
            				if (  (_hx_switch_0==HX_("~",7e,00,00,00)) ){
HXLINE( 354)					return ~(( (int)(this->expr(e5)) ));
HXDLIN( 354)					goto _hx_goto_50;
            				}
            				/* default */{
HXLINE( 357)					HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(op1));
            				}
            				_hx_goto_50:;
            			}
            			break;
            			case (int)8: {
HXLINE( 359)				::Array< ::Dynamic> params = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 359)				 ::hscript::Expr e6 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 360)				::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new();
HXLINE( 361)				{
HXLINE( 361)					int _g1 = (int)0;
HXDLIN( 361)					while((_g1 < params->length)){
HXLINE( 361)						 ::hscript::Expr p = params->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN( 361)						_g1 = (_g1 + (int)1);
HXLINE( 362)						args->push(this->expr(p));
            					}
            				}
HXLINE( 364)				if ((_hx_getEnumValueIndex(e6) == (int)5)) {
HXLINE( 365)					::String f2 = e6->_hx_getString(1);
HXDLIN( 365)					 ::hscript::Expr e7 = e6->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 366)					 ::Dynamic obj = this->expr(e7);
HXLINE( 367)					if (hx::IsNull( obj )) {
HXLINE( 367)						HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidAccess(f2));
            					}
HXLINE( 368)					return this->fcall(obj,f2,args);
            				}
            				else {
HXLINE( 370)					return this->call(null(),this->expr(e6),args);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 372)				 ::hscript::Expr e22 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 372)				 ::hscript::Expr e12 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 372)				 ::hscript::Expr econd = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 373)				if (hx::IsEq( this->expr(econd),true )) {
HXLINE( 373)					return this->expr(e12);
            				}
            				else {
HXLINE( 373)					if (hx::IsNull( e22 )) {
HXLINE( 373)						return null();
            					}
            					else {
HXLINE( 373)						return this->expr(e22);
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 374)				 ::hscript::Expr e8 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 374)				 ::hscript::Expr econd1 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 375)				this->whileLoop(econd1,e8);
HXLINE( 376)				return null();
            			}
            			break;
            			case (int)11: {
HXLINE( 380)				 ::hscript::Expr e9 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 380)				 ::hscript::Expr it = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 380)				::String v2 = e->_hx_getString(0);
HXLINE( 381)				this->forLoop(v2,it,e9);
HXLINE( 382)				return null();
            			}
            			break;
            			case (int)12: {
HXLINE( 384)				HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SBreak_dyn());
            			}
            			break;
            			case (int)13: {
HXLINE( 386)				HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SContinue_dyn());
            			}
            			break;
            			case (int)14: {
            				HX_BEGIN_LOCAL_FUNC_S7(hx::LocalFunc,_hx_Closure_0,::String,name, ::hscript::Expr,fexpr, ::hscript::Interp,_gthis,int,minParams, ::hscript::Interp,me, ::haxe::ds::StringMap,capturedLocals,::Array< ::Dynamic>,params1) HXARGC(1)
            				 ::Dynamic _hx_run(::cpp::VirtualArray args1){
            					HX_STACKFRAME(&_hx_pos_f37559d470356c9e_398_expr)
HXLINE( 399)					if ((args1->get_length() != params1->length)) {
HXLINE( 400)						if ((args1->get_length() < minParams)) {
HXLINE( 401)							::String str = (((HX_("Invalid number of parameters. Got ",cb,2b,d9,b1) + args1->get_length()) + HX_(", required ",ed,0c,66,93)) + minParams);
HXLINE( 402)							if (hx::IsNotNull( name )) {
HXLINE( 402)								str = (str + ((HX_(" for function '",f6,90,ab,a0) + name) + HX_("'",27,00,00,00)));
            							}
HXLINE( 403)							HX_STACK_DO_THROW(str);
            						}
HXLINE( 406)						::cpp::VirtualArray args2 = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 407)						int extraParams = (args1->get_length() - minParams);
HXLINE( 408)						int pos = (int)0;
HXLINE( 409)						{
HXLINE( 409)							int _g3 = (int)0;
HXDLIN( 409)							while((_g3 < params1->length)){
HXLINE( 409)								 ::Dynamic p2 = params1->__get(_g3);
HXDLIN( 409)								_g3 = (_g3 + (int)1);
HXLINE( 410)								if (( (bool)(p2->__Field(HX_("opt",33,9c,54,00),hx::paccDynamic)) )) {
HXLINE( 411)									if ((extraParams > (int)0)) {
HXLINE( 412)										pos = (pos + (int)1);
HXDLIN( 412)										args2->push(args1->__get((pos - (int)1)));
HXLINE( 413)										extraParams = (extraParams - (int)1);
            									}
            									else {
HXLINE( 415)										args2->push(null());
            									}
            								}
            								else {
HXLINE( 417)									pos = (pos + (int)1);
HXDLIN( 417)									args2->push(args1->__get((pos - (int)1)));
            								}
            							}
            						}
HXLINE( 418)						args1 = args2;
            					}
HXLINE( 420)					 ::haxe::ds::StringMap old1 = me->locals;
HXDLIN( 420)					int depth = me->depth;
HXLINE( 421)					me->depth++;
HXLINE( 422)					me->locals = me->duplicate(capturedLocals);
HXLINE( 423)					{
HXLINE( 423)						int _g11 = (int)0;
HXDLIN( 423)						int _g4 = params1->length;
HXDLIN( 423)						while((_g11 < _g4)){
HXLINE( 423)							_g11 = (_g11 + (int)1);
HXDLIN( 423)							int i = (_g11 - (int)1);
HXLINE( 424)							::haxe::IMap_obj::set(me->locals, ::Dynamic(params1->__get(i)->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)), ::Dynamic(hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("r",72,00,00,00),args1->__get(i))));
            						}
            					}
HXLINE( 425)					 ::Dynamic r = null();
HXLINE( 426)					if (_gthis->inTry) {
HXLINE( 427)						try {
            							HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 428)							r = me->exprReturn(fexpr);
            						}
            						catch( ::Dynamic _hx_e){
            							if (_hx_e.IsClass<  ::Dynamic >() ){
            								HX_STACK_BEGIN_CATCH
            								 ::Dynamic e10 = _hx_e;
HXLINE( 430)								me->locals = old1;
HXLINE( 431)								me->depth = depth;
HXLINE( 435)								HX_STACK_DO_THROW(e10);
            							}
            							else {
            								HX_STACK_DO_THROW(_hx_e);
            							}
            						}
            					}
            					else {
HXLINE( 439)						r = me->exprReturn(fexpr);
            					}
HXLINE( 440)					me->locals = old1;
HXLINE( 441)					me->depth = depth;
HXLINE( 442)					return r;
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 389)				::String name = e->_hx_getString(2);
HXDLIN( 389)				 ::hscript::Expr fexpr = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 389)				::Array< ::Dynamic> params1 = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 390)				 ::haxe::ds::StringMap capturedLocals = this->duplicate(this->locals);
HXLINE( 391)				 ::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);
HXLINE( 392)				bool hasOpt = false;
HXDLIN( 392)				int minParams = (int)0;
HXLINE( 393)				{
HXLINE( 393)					int _g2 = (int)0;
HXDLIN( 393)					while((_g2 < params1->length)){
HXLINE( 393)						 ::Dynamic p1 = params1->__get(_g2);
HXDLIN( 393)						_g2 = (_g2 + (int)1);
HXLINE( 394)						if (( (bool)(p1->__Field(HX_("opt",33,9c,54,00),hx::paccDynamic)) )) {
HXLINE( 395)							hasOpt = true;
            						}
            						else {
HXLINE( 397)							minParams = (minParams + (int)1);
            						}
            					}
            				}
HXLINE( 398)				 ::Dynamic f3 =  ::Dynamic(new _hx_Closure_0(name,fexpr,_gthis,minParams,me,capturedLocals,params1));
HXLINE( 444)				 ::Dynamic f4 = ::Reflect_obj::makeVarArgs(f3);
HXLINE( 445)				if (hx::IsNotNull( name )) {
HXLINE( 446)					if ((this->depth == (int)0)) {
HXLINE( 448)						::haxe::IMap_obj::set(this->variables,name,f4);
            					}
            					else {
HXLINE( 451)						::Array< ::Dynamic> _hx_tmp1 = this->declared;
HXDLIN( 451)						 ::Dynamic _hx_tmp2 = ::haxe::IMap_obj::get(this->locals,name);
HXDLIN( 451)						_hx_tmp1->push( ::Dynamic(hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("n",6e,00,00,00),name)
            							->setFixed(1,HX_("old",a7,98,54,00),_hx_tmp2)));
HXLINE( 452)						 ::Dynamic ref =  ::Dynamic(hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("r",72,00,00,00),f4));
HXLINE( 453)						::haxe::IMap_obj::set(this->locals,name,ref);
HXLINE( 454)						capturedLocals->set(name,ref);
            					}
            				}
HXLINE( 457)				return f4;
            			}
            			break;
            			case (int)15: {
HXLINE( 387)				 ::hscript::Expr e13 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 388)				 ::Dynamic _hx_tmp3;
HXDLIN( 388)				if (hx::IsNull( e13 )) {
HXLINE( 388)					_hx_tmp3 = null();
            				}
            				else {
HXLINE( 388)					_hx_tmp3 = this->expr(e13);
            				}
HXDLIN( 388)				HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SReturn(_hx_tmp3));
            			}
            			break;
            			case (int)16: {
HXLINE( 500)				 ::hscript::Expr index = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 500)				 ::hscript::Expr e14 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 501)				 ::Dynamic arr = this->expr(e14);
HXLINE( 502)				 ::Dynamic index1 = this->expr(index);
HXLINE( 503)				if (::Std_obj::is(arr,hx::ClassOf< ::haxe::IMap >())) {
HXLINE( 504)					return ::haxe::IMap_obj::get(arr,index1);
            				}
            				else {
HXLINE( 507)					return arr->__GetItem(( (int)(index1) ));
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 458)				::Array< ::Dynamic> arr1 = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 459)				bool _hx_tmp4;
HXDLIN( 459)				if ((arr1->length > (int)0)) {
HXLINE( 459)					 ::hscript::Expr _g5 = arr1->__get((int)0).StaticCast<  ::hscript::Expr >();
HXDLIN( 459)					if ((_hx_getEnumValueIndex(_g5) == (int)6)) {
HXLINE( 459)						if ((_g5->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 459)							_hx_tmp4 = true;
            						}
            						else {
HXLINE( 459)							_hx_tmp4 = false;
            						}
            					}
            					else {
HXLINE( 459)						_hx_tmp4 = false;
            					}
            				}
            				else {
HXLINE( 459)					_hx_tmp4 = false;
            				}
HXDLIN( 459)				if (_hx_tmp4) {
HXLINE( 460)					bool isAllString = true;
HXLINE( 461)					bool isAllInt = true;
HXLINE( 462)					bool isAllObject = true;
HXLINE( 463)					bool isAllEnum = true;
HXLINE( 464)					::cpp::VirtualArray keys = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 465)					::cpp::VirtualArray values = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 466)					{
HXLINE( 466)						int _g12 = (int)0;
HXDLIN( 466)						while((_g12 < arr1->length)){
HXLINE( 466)							 ::hscript::Expr e15 = arr1->__get(_g12).StaticCast<  ::hscript::Expr >();
HXDLIN( 466)							_g12 = (_g12 + (int)1);
HXLINE( 467)							if ((_hx_getEnumValueIndex(e15) == (int)6)) {
HXLINE( 467)								if ((e15->_hx_getString(0) == HX_("=>",61,35,00,00))) {
HXLINE( 468)									 ::hscript::Expr eValue = e15->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 468)									 ::hscript::Expr eKey = e15->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 468)									{
HXLINE( 469)										 ::Dynamic key = this->expr(eKey);
HXLINE( 470)										 ::Dynamic value1 = this->expr(eValue);
HXLINE( 471)										if (isAllString) {
HXLINE( 471)											isAllString = ::Std_obj::is(key,hx::ClassOf< ::String >());
            										}
            										else {
HXLINE( 471)											isAllString = false;
            										}
HXLINE( 472)										if (isAllInt) {
HXLINE( 472)											isAllInt = ::Std_obj::is(key,hx::ClassOf< int >());
            										}
            										else {
HXLINE( 472)											isAllInt = false;
            										}
HXLINE( 473)										if (isAllObject) {
HXLINE( 473)											isAllObject = ::Reflect_obj::isObject(key);
            										}
            										else {
HXLINE( 473)											isAllObject = false;
            										}
HXLINE( 474)										if (isAllEnum) {
HXLINE( 474)											isAllEnum = ::Reflect_obj::isEnumValue(key);
            										}
            										else {
HXLINE( 474)											isAllEnum = false;
            										}
HXLINE( 475)										keys->push(key);
HXLINE( 476)										values->push(value1);
            									}
            								}
            								else {
HXLINE( 478)									HX_STACK_DO_THROW(HX_("=> expected",17,e5,65,e5));
            								}
            							}
            							else {
HXLINE( 478)								HX_STACK_DO_THROW(HX_("=> expected",17,e5,65,e5));
            							}
            						}
            					}
HXLINE( 481)					 ::Dynamic map;
HXLINE( 482)					if (isAllInt) {
HXLINE( 481)						map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            					}
            					else {
HXLINE( 483)						if (isAllString) {
HXLINE( 481)							map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            						}
            						else {
HXLINE( 484)							if (isAllEnum) {
HXLINE( 481)								map =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
            							}
            							else {
HXLINE( 485)								if (isAllObject) {
HXLINE( 481)									map =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            								}
            								else {
HXLINE( 486)									HX_STACK_DO_THROW(HX_("Inconsistent key types",af,4f,50,a9));
            								}
            							}
            						}
            					}
HXLINE( 488)					{
HXLINE( 488)						int _g21 = (int)0;
HXDLIN( 488)						int _g13 = keys->get_length();
HXDLIN( 488)						while((_g21 < _g13)){
HXLINE( 488)							_g21 = (_g21 + (int)1);
HXDLIN( 488)							int n1 = (_g21 - (int)1);
HXLINE( 489)							::Dynamic _hx_tmp5 = map;
HXDLIN( 489)							::haxe::IMap_obj::set(_hx_tmp5,keys->__get(n1),values->__get(n1));
            						}
            					}
HXLINE( 491)					return map;
            				}
            				else {
HXLINE( 494)					::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 495)					{
HXLINE( 495)						int _g14 = (int)0;
HXDLIN( 495)						while((_g14 < arr1->length)){
HXLINE( 495)							 ::hscript::Expr e16 = arr1->__get(_g14).StaticCast<  ::hscript::Expr >();
HXDLIN( 495)							_g14 = (_g14 + (int)1);
HXLINE( 496)							a->push(this->expr(e16));
            						}
            					}
HXLINE( 498)					return a;
            				}
            			}
            			break;
            			case (int)18: {
HXLINE( 509)				::Array< ::Dynamic> params2 = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 509)				::String cl = e->_hx_getString(0);
HXLINE( 510)				::cpp::VirtualArray a1 = ::cpp::VirtualArray_obj::__new();
HXLINE( 511)				{
HXLINE( 511)					int _g6 = (int)0;
HXDLIN( 511)					while((_g6 < params2->length)){
HXLINE( 511)						 ::hscript::Expr e17 = params2->__get(_g6).StaticCast<  ::hscript::Expr >();
HXDLIN( 511)						_g6 = (_g6 + (int)1);
HXLINE( 512)						a1->push(this->expr(e17));
            					}
            				}
HXLINE( 513)				return this->cnew(cl,a1);
            			}
            			break;
            			case (int)19: {
HXLINE( 514)				 ::hscript::Expr e18 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 515)				HX_STACK_DO_THROW(this->expr(e18));
            			}
            			break;
            			case (int)20: {
HXLINE( 516)				 ::hscript::Expr ecatch = e->_hx_getObject(3).StaticCast<  ::hscript::Expr >();
HXDLIN( 516)				::String n2 = e->_hx_getString(1);
HXDLIN( 516)				 ::hscript::Expr e19 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 517)				int old2 = this->declared->length;
HXLINE( 518)				bool oldTry = this->inTry;
HXLINE( 519)				try {
            					HX_STACK_CATCHABLE( ::hscript::_Interp::Stop, 0);
            					HX_STACK_CATCHABLE( ::Dynamic, 1);
HXLINE( 520)					this->inTry = true;
HXLINE( 521)					 ::Dynamic v3 = this->expr(e19);
HXLINE( 522)					this->restore(old2);
HXLINE( 523)					this->inTry = oldTry;
HXLINE( 524)					return v3;
            				}
            				catch( ::Dynamic _hx_e){
            					if (_hx_e.IsClass<  ::hscript::_Interp::Stop >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::hscript::_Interp::Stop err = _hx_e;
HXLINE( 526)						this->inTry = oldTry;
HXLINE( 527)						HX_STACK_DO_THROW(err);
            					}
            					else if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic err1 = _hx_e;
HXLINE( 530)						this->restore(old2);
HXLINE( 531)						this->inTry = oldTry;
HXLINE( 533)						::Array< ::Dynamic> _hx_tmp6 = this->declared;
HXDLIN( 533)						_hx_tmp6->push( ::Dynamic(hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("n",6e,00,00,00),n2)
            							->setFixed(1,HX_("old",a7,98,54,00),::haxe::IMap_obj::get(this->locals,n2))));
HXLINE( 534)						::haxe::IMap_obj::set(this->locals,n2, ::Dynamic(hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("r",72,00,00,00),err1)));
HXLINE( 535)						 ::Dynamic v4 = this->expr(ecatch);
HXLINE( 536)						this->restore(old2);
HXLINE( 537)						return v4;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            			break;
            			case (int)21: {
HXLINE( 539)				::Array< ::Dynamic> fl = e->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 540)				 ::Dynamic o =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 541)				{
HXLINE( 541)					int _g7 = (int)0;
HXDLIN( 541)					while((_g7 < fl->length)){
HXLINE( 541)						 ::Dynamic f5 = fl->__get(_g7);
HXDLIN( 541)						_g7 = (_g7 + (int)1);
HXLINE( 542)						::String f6 = ( (::String)(f5->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXDLIN( 542)						this->set(o,f6,this->expr(f5->__Field(HX_("e",65,00,00,00),hx::paccDynamic)));
            					}
            				}
HXLINE( 543)				return o;
            			}
            			break;
            			case (int)22: {
HXLINE( 544)				 ::hscript::Expr e23 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 544)				 ::hscript::Expr e110 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 544)				 ::hscript::Expr econd2 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 545)				if (hx::IsEq( this->expr(econd2),true )) {
HXLINE( 545)					return this->expr(e110);
            				}
            				else {
HXLINE( 545)					return this->expr(e23);
            				}
            			}
            			break;
            			case (int)23: {
HXLINE( 546)				 ::hscript::Expr def = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 546)				::Array< ::Dynamic> cases = e->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 546)				 ::hscript::Expr e20 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 547)				 ::Dynamic val = this->expr(e20);
HXLINE( 548)				bool match = false;
HXLINE( 549)				{
HXLINE( 549)					int _g8 = (int)0;
HXDLIN( 549)					while((_g8 < cases->length)){
HXLINE( 549)						 ::Dynamic c1 = cases->__get(_g8);
HXDLIN( 549)						_g8 = (_g8 + (int)1);
HXLINE( 550)						{
HXLINE( 550)							int _g15 = (int)0;
HXDLIN( 550)							::Array< ::Dynamic> _g22 = ( (::Array< ::Dynamic>)(c1->__Field(HX_("values",e2,03,b7,4f),hx::paccDynamic)) );
HXDLIN( 550)							while((_g15 < _g22->length)){
HXLINE( 550)								 ::hscript::Expr v5 = _g22->__get(_g15).StaticCast<  ::hscript::Expr >();
HXDLIN( 550)								_g15 = (_g15 + (int)1);
HXLINE( 551)								if (hx::IsEq( this->expr(v5),val )) {
HXLINE( 552)									match = true;
HXLINE( 553)									goto _hx_goto_61;
            								}
            							}
            							_hx_goto_61:;
            						}
HXLINE( 555)						if (match) {
HXLINE( 556)							val = this->expr(c1->__Field(HX_("expr",35,fd,1d,43),hx::paccDynamic));
HXLINE( 557)							goto _hx_goto_60;
            						}
            					}
            					_hx_goto_60:;
            				}
HXLINE( 560)				if (!(match)) {
HXLINE( 561)					if (hx::IsNull( def )) {
HXLINE( 561)						val = null();
            					}
            					else {
HXLINE( 561)						val = this->expr(def);
            					}
            				}
HXLINE( 562)				return val;
            			}
            			break;
            			case (int)24: {
HXLINE( 377)				 ::hscript::Expr e24 = e->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 377)				 ::hscript::Expr econd3 = e->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 378)				this->doWhileLoop(econd3,e24);
HXLINE( 379)				return null();
            			}
            			break;
            			case (int)25: {
HXLINE( 563)				 ::hscript::Expr e25 = e->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXLINE( 564)				return this->expr(e25);
            			}
            			break;
            		}
HXLINE( 309)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,expr,return )

void Interp_obj::doWhileLoop( ::hscript::Expr econd, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_569_doWhileLoop)
HXLINE( 570)		int old = this->declared->length;
HXLINE( 571)		while(true){
HXLINE( 572)			try {
            				HX_STACK_CATCHABLE( ::hscript::_Interp::Stop, 0);
HXLINE( 573)				this->expr(e);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::hscript::_Interp::Stop >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::hscript::_Interp::Stop err = _hx_e;
HXLINE( 575)					switch((int)(_hx_getEnumValueIndex(err))){
            						case (int)0: {
HXLINE( 577)							goto _hx_goto_64;
            						}
            						break;
            						case (int)1: {
            						}
            						break;
            						case (int)2: {
HXLINE( 578)							HX_STACK_DO_THROW(err);
            						}
            						break;
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 571)			if (!(hx::IsEq( this->expr(econd),true ))) {
HXLINE( 571)				goto _hx_goto_64;
            			}
            		}
            		_hx_goto_64:;
HXLINE( 583)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,doWhileLoop,(void))

void Interp_obj::whileLoop( ::hscript::Expr econd, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_586_whileLoop)
HXLINE( 587)		int old = this->declared->length;
HXLINE( 588)		while(hx::IsEq( this->expr(econd),true )){
HXLINE( 589)			try {
            				HX_STACK_CATCHABLE( ::hscript::_Interp::Stop, 0);
HXLINE( 590)				this->expr(e);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::hscript::_Interp::Stop >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::hscript::_Interp::Stop err = _hx_e;
HXLINE( 592)					switch((int)(_hx_getEnumValueIndex(err))){
            						case (int)0: {
HXLINE( 594)							goto _hx_goto_66;
            						}
            						break;
            						case (int)1: {
            						}
            						break;
            						case (int)2: {
HXLINE( 595)							HX_STACK_DO_THROW(err);
            						}
            						break;
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_66:;
HXLINE( 599)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,whileLoop,(void))

 ::Dynamic Interp_obj::makeIterator( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_602_makeIterator)
HXLINE( 606)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 606)			v = v->__Field(HX_("iterator",ee,49,9a,93),hx::paccDynamic)();
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
HXLINE( 608)		bool _hx_tmp;
HXDLIN( 608)		if (hx::IsNotNull(  ::Dynamic(v->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)) )) {
HXLINE( 608)			_hx_tmp = hx::IsNull(  ::Dynamic(v->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)) );
            		}
            		else {
HXLINE( 608)			_hx_tmp = true;
            		}
HXDLIN( 608)		if (_hx_tmp) {
HXLINE( 608)			HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidIterator(v));
            		}
HXLINE( 609)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,makeIterator,return )

void Interp_obj::forLoop(::String n, ::hscript::Expr it, ::hscript::Expr e){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_612_forLoop)
HXLINE( 613)		int old = this->declared->length;
HXLINE( 614)		::Array< ::Dynamic> _hx_tmp = this->declared;
HXDLIN( 614)		_hx_tmp->push( ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("n",6e,00,00,00),n)
            			->setFixed(1,HX_("old",a7,98,54,00),this->locals->get(n))));
HXLINE( 615)		 ::Dynamic it1 = this->makeIterator(this->expr(it));
HXLINE( 616)		while(( (bool)(it1->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 617)			{
HXLINE( 617)				::Dynamic this1 = this->locals;
HXDLIN( 617)				( ( ::haxe::ds::StringMap)(this1) )->set(n, ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("r",72,00,00,00),it1->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)())));
            			}
HXLINE( 618)			try {
            				HX_STACK_CATCHABLE( ::hscript::_Interp::Stop, 0);
HXLINE( 619)				this->expr(e);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::hscript::_Interp::Stop >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::hscript::_Interp::Stop err = _hx_e;
HXLINE( 621)					switch((int)(_hx_getEnumValueIndex(err))){
            						case (int)0: {
HXLINE( 623)							goto _hx_goto_69;
            						}
            						break;
            						case (int)1: {
            						}
            						break;
            						case (int)2: {
HXLINE( 624)							HX_STACK_DO_THROW(err);
            						}
            						break;
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		_hx_goto_69:;
HXLINE( 628)		this->restore(old);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,forLoop,(void))

bool Interp_obj::isMap( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_632_isMap)
HXDLIN( 632)		return ::Std_obj::is(o,hx::ClassOf< ::haxe::IMap >());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,isMap,return )

 ::Dynamic Interp_obj::getMapValue( ::Dynamic map, ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_636_getMapValue)
HXDLIN( 636)		return ::haxe::IMap_obj::get(map,key);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,getMapValue,return )

void Interp_obj::setMapValue( ::Dynamic map, ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_640_setMapValue)
HXDLIN( 640)		::haxe::IMap_obj::set(map,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,setMapValue,(void))

 ::Dynamic Interp_obj::get( ::Dynamic o,::String f){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_643_get)
HXLINE( 644)		if (hx::IsNull( o )) {
HXLINE( 644)			HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidAccess(f));
            		}
HXLINE( 645)		return ::Reflect_obj::getProperty(o,f);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,get,return )

 ::Dynamic Interp_obj::set( ::Dynamic o,::String f, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_659_set)
HXLINE( 660)		if (hx::IsNull( o )) {
HXLINE( 660)			HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidAccess(f));
            		}
HXLINE( 661)		::Reflect_obj::setProperty(o,f,v);
HXLINE( 662)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,set,return )

 ::Dynamic Interp_obj::fcall( ::Dynamic o,::String f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_666_fcall)
HXDLIN( 666)		return this->call(o,this->get(o,f),args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,fcall,return )

 ::Dynamic Interp_obj::call( ::Dynamic o, ::Dynamic f,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_670_call)
HXDLIN( 670)		return ::Reflect_obj::callMethod(o,f,args);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,call,return )

 ::Dynamic Interp_obj::cnew(::String cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f37559d470356c9e_673_cnew)
HXLINE( 674)		hx::Class c = ::Type_obj::resolveClass(cl);
HXLINE( 675)		if (hx::IsNull( c )) {
HXLINE( 675)			c = this->resolve(cl);
            		}
HXLINE( 676)		return ::Type_obj::createInstance(c,args);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,cnew,return )


hx::ObjectPtr< Interp_obj > Interp_obj::__new() {
	hx::ObjectPtr< Interp_obj > __this = new Interp_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Interp_obj > Interp_obj::__alloc(hx::Ctx *_hx_ctx) {
	Interp_obj *__this = (Interp_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Interp_obj), true, "hscript.Interp"));
	*(void **)__this = Interp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Interp_obj::Interp_obj()
{
}

void Interp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interp);
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(binops,"binops");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(inTry,"inTry");
	HX_MARK_MEMBER_NAME(declared,"declared");
	HX_MARK_END_CLASS();
}

void Interp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(binops,"binops");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(inTry,"inTry");
	HX_VISIT_MEMBER_NAME(declared,"declared");
}

hx::Val Interp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"edef") ) { return hx::Val( edef_dyn() ); }
		if (HX_FIELD_EQ(inName,"expr") ) { return hx::Val( expr_dyn() ); }
		if (HX_FIELD_EQ(inName,"call") ) { return hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"cnew") ) { return hx::Val( cnew_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return hx::Val( depth ); }
		if (HX_FIELD_EQ(inName,"inTry") ) { return hx::Val( inTry ); }
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error_dyn() ); }
		if (HX_FIELD_EQ(inName,"isMap") ) { return hx::Val( isMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"fcall") ) { return hx::Val( fcall_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { return hx::Val( locals ); }
		if (HX_FIELD_EQ(inName,"binops") ) { return hx::Val( binops ); }
		if (HX_FIELD_EQ(inName,"assign") ) { return hx::Val( assign_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initOps") ) { return hx::Val( initOps_dyn() ); }
		if (HX_FIELD_EQ(inName,"execute") ) { return hx::Val( execute_dyn() ); }
		if (HX_FIELD_EQ(inName,"restore") ) { return hx::Val( restore_dyn() ); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return hx::Val( resolve_dyn() ); }
		if (HX_FIELD_EQ(inName,"forLoop") ) { return hx::Val( forLoop_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { return hx::Val( declared ); }
		if (HX_FIELD_EQ(inName,"posInfos") ) { return hx::Val( posInfos_dyn() ); }
		if (HX_FIELD_EQ(inName,"assignOp") ) { return hx::Val( assignOp_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return hx::Val( variables ); }
		if (HX_FIELD_EQ(inName,"increment") ) { return hx::Val( increment_dyn() ); }
		if (HX_FIELD_EQ(inName,"duplicate") ) { return hx::Val( duplicate_dyn() ); }
		if (HX_FIELD_EQ(inName,"whileLoop") ) { return hx::Val( whileLoop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprReturn") ) { return hx::Val( exprReturn_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doWhileLoop") ) { return hx::Val( doWhileLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMapValue") ) { return hx::Val( getMapValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMapValue") ) { return hx::Val( setMapValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"evalAssignOp") ) { return hx::Val( evalAssignOp_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeIterator") ) { return hx::Val( makeIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Interp_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inTry") ) { inTry=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binops") ) { binops=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { declared=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"));
	outFields->push(HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("binops","\xcb","\x59","\x16","\xed"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe"));
	outFields->push(HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Interp_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,variables),HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,locals),HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,binops),HX_HCSTRING("binops","\xcb","\x59","\x16","\xed")},
	{hx::fsInt,(int)offsetof(Interp_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsBool,(int)offsetof(Interp_obj,inTry),HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Interp_obj,declared),HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Interp_obj_sStaticStorageInfo = 0;
#endif

static ::String Interp_obj_sMemberFields[] = {
	HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"),
	HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59"),
	HX_HCSTRING("binops","\xcb","\x59","\x16","\xed"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe"),
	HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4"),
	HX_HCSTRING("posInfos","\x11","\x82","\x2e","\x5a"),
	HX_HCSTRING("initOps","\x02","\x63","\x8b","\xcb"),
	HX_HCSTRING("assign","\x2f","\x46","\x06","\x4c"),
	HX_HCSTRING("assignOp","\x30","\xb5","\xc7","\x0e"),
	HX_HCSTRING("evalAssignOp","\xec","\xd8","\x94","\x19"),
	HX_HCSTRING("increment","\x2f","\x06","\xff","\x31"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("exprReturn","\xc5","\x6b","\xed","\x86"),
	HX_HCSTRING("duplicate","\x8b","\x21","\x17","\xa1"),
	HX_HCSTRING("restore","\x4e","\x67","\xb0","\x6a"),
	HX_HCSTRING("edef","\x80","\xc6","\x0e","\x43"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"),
	HX_HCSTRING("doWhileLoop","\xaa","\x01","\x97","\x3a"),
	HX_HCSTRING("whileLoop","\xb5","\x42","\x98","\xe1"),
	HX_HCSTRING("makeIterator","\xfc","\xdd","\x72","\xd8"),
	HX_HCSTRING("forLoop","\x0d","\x52","\x69","\xc9"),
	HX_HCSTRING("isMap","\xd2","\x34","\x51","\xc1"),
	HX_HCSTRING("getMapValue","\xeb","\xb1","\xee","\xce"),
	HX_HCSTRING("setMapValue","\xf7","\xb8","\x5b","\xd9"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("fcall","\x04","\x44","\x99","\xfc"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	HX_HCSTRING("cnew","\xdd","\xef","\xc3","\x41"),
	::String(null()) };

static void Interp_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Interp_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#endif

hx::Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	hx::Object *dummy = new Interp_obj;
	Interp_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hscript.Interp","\x8f","\x7c","\xf0","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Interp_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Interp_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Interp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Interp_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Interp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Interp_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
