// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Backend
#include <haxe/ui/Backend.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_BackendBase
#include <haxe/ui/backend/BackendBase.h>
#endif
#ifndef INCLUDED_haxe_ui_scripting_ConditionEvaluator
#include <haxe/ui/scripting/ConditionEvaluator.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ed1b7a0a87ba4467_7_new,"haxe.ui.scripting.ConditionEvaluator","new",0x12091d8f,"haxe.ui.scripting.ConditionEvaluator.new","haxe/ui/scripting/ConditionEvaluator.hx",7,0x4ba75080)
HX_LOCAL_STACK_FRAME(_hx_pos_ed1b7a0a87ba4467_10_evaluate,"haxe.ui.scripting.ConditionEvaluator","evaluate",0xe509e8ca,"haxe.ui.scripting.ConditionEvaluator.evaluate","haxe/ui/scripting/ConditionEvaluator.hx",10,0x4ba75080)
namespace haxe{
namespace ui{
namespace scripting{

void ConditionEvaluator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ed1b7a0a87ba4467_7_new)
            	}

Dynamic ConditionEvaluator_obj::__CreateEmpty() { return new ConditionEvaluator_obj; }

void *ConditionEvaluator_obj::_hx_vtable = 0;

Dynamic ConditionEvaluator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConditionEvaluator_obj > _hx_result = new ConditionEvaluator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConditionEvaluator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21c15c45;
}

bool ConditionEvaluator_obj::evaluate(::String condition){
            	HX_GC_STACKFRAME(&_hx_pos_ed1b7a0a87ba4467_10_evaluate)
HXLINE(  11)		if (hx::IsNull( ::haxe::ui::scripting::ConditionEvaluator_obj::_parser )) {
HXLINE(  12)			::haxe::ui::scripting::ConditionEvaluator_obj::_parser =  ::hscript::Parser_obj::__alloc( HX_CTX );
            		}
HXLINE(  14)		if (hx::IsNull( ::haxe::ui::scripting::ConditionEvaluator_obj::_interp )) {
HXLINE(  15)			::haxe::ui::scripting::ConditionEvaluator_obj::_interp =  ::hscript::Interp_obj::__alloc( HX_CTX );
            		}
HXLINE(  18)		::haxe::ui::scripting::ConditionEvaluator_obj::_interp->variables->set(HX_("Backend",f4,e3,d8,c8),hx::ClassOf< ::haxe::ui::Backend >());
HXLINE(  19)		{
HXLINE(  19)			::Dynamic this1 = ::haxe::ui::scripting::ConditionEvaluator_obj::_interp->variables;
HXDLIN(  19)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("backend",14,bc,87,fb),::haxe::ui::Backend_obj::get_id());
            		}
HXLINE(  21)		 ::hscript::Expr program = ::haxe::ui::scripting::ConditionEvaluator_obj::_parser->parseString(condition,null());
HXLINE(  22)		bool r = ( (bool)(::haxe::ui::scripting::ConditionEvaluator_obj::_interp->execute(program)) );
HXLINE(  24)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConditionEvaluator_obj,evaluate,return )

 ::hscript::Parser ConditionEvaluator_obj::_parser;

 ::hscript::Interp ConditionEvaluator_obj::_interp;


hx::ObjectPtr< ConditionEvaluator_obj > ConditionEvaluator_obj::__new() {
	hx::ObjectPtr< ConditionEvaluator_obj > __this = new ConditionEvaluator_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ConditionEvaluator_obj > ConditionEvaluator_obj::__alloc(hx::Ctx *_hx_ctx) {
	ConditionEvaluator_obj *__this = (ConditionEvaluator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConditionEvaluator_obj), false, "haxe.ui.scripting.ConditionEvaluator"));
	*(void **)__this = ConditionEvaluator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConditionEvaluator_obj::ConditionEvaluator_obj()
{
}

hx::Val ConditionEvaluator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { return hx::Val( evaluate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ConditionEvaluator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_parser") ) { outValue = ( _parser ); return true; }
		if (HX_FIELD_EQ(inName,"_interp") ) { outValue = ( _interp ); return true; }
	}
	return false;
}

bool ConditionEvaluator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_parser") ) { _parser=ioValue.Cast<  ::hscript::Parser >(); return true; }
		if (HX_FIELD_EQ(inName,"_interp") ) { _interp=ioValue.Cast<  ::hscript::Interp >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ConditionEvaluator_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ConditionEvaluator_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::hscript::Parser*/ ,(void *) &ConditionEvaluator_obj::_parser,HX_HCSTRING("_parser","\x7e","\xae","\xff","\x5b")},
	{hx::fsObject /*::hscript::Interp*/ ,(void *) &ConditionEvaluator_obj::_interp,HX_HCSTRING("_interp","\x73","\x8b","\xfd","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ConditionEvaluator_obj_sMemberFields[] = {
	HX_HCSTRING("evaluate","\x59","\x60","\x50","\x01"),
	::String(null()) };

static void ConditionEvaluator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConditionEvaluator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ConditionEvaluator_obj::_parser,"_parser");
	HX_MARK_MEMBER_NAME(ConditionEvaluator_obj::_interp,"_interp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConditionEvaluator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConditionEvaluator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ConditionEvaluator_obj::_parser,"_parser");
	HX_VISIT_MEMBER_NAME(ConditionEvaluator_obj::_interp,"_interp");
};

#endif

hx::Class ConditionEvaluator_obj::__mClass;

static ::String ConditionEvaluator_obj_sStaticFields[] = {
	HX_HCSTRING("_parser","\x7e","\xae","\xff","\x5b"),
	HX_HCSTRING("_interp","\x73","\x8b","\xfd","\x0c"),
	::String(null())
};

void ConditionEvaluator_obj::__register()
{
	hx::Object *dummy = new ConditionEvaluator_obj;
	ConditionEvaluator_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.scripting.ConditionEvaluator","\x1d","\xaa","\x91","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConditionEvaluator_obj::__GetStatic;
	__mClass->mSetStaticField = &ConditionEvaluator_obj::__SetStatic;
	__mClass->mMarkFunc = ConditionEvaluator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ConditionEvaluator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConditionEvaluator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConditionEvaluator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConditionEvaluator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConditionEvaluator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConditionEvaluator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace scripting
