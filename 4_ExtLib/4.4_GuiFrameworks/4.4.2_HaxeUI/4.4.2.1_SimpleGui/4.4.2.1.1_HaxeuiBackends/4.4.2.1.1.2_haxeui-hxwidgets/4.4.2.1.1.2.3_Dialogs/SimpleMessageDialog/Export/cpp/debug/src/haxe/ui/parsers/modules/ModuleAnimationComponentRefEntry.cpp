// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationComponentRefEntry
#include <haxe/ui/parsers/modules/ModuleAnimationComponentRefEntry.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8db38c07ae67b186_119_new,"haxe.ui.parsers.modules.ModuleAnimationComponentRefEntry","new",0xa78f14c9,"haxe.ui.parsers.modules.ModuleAnimationComponentRefEntry.new","haxe/ui/parsers/modules/Module.hx",119,0xa34fcf1d)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void ModuleAnimationComponentRefEntry_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_8db38c07ae67b186_119_new)
HXLINE( 120)		this->properties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 121)		this->vars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ModuleAnimationComponentRefEntry_obj::__CreateEmpty() { return new ModuleAnimationComponentRefEntry_obj; }

void *ModuleAnimationComponentRefEntry_obj::_hx_vtable = 0;

Dynamic ModuleAnimationComponentRefEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ModuleAnimationComponentRefEntry_obj > _hx_result = new ModuleAnimationComponentRefEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ModuleAnimationComponentRefEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74aa8c11;
}


hx::ObjectPtr< ModuleAnimationComponentRefEntry_obj > ModuleAnimationComponentRefEntry_obj::__new() {
	hx::ObjectPtr< ModuleAnimationComponentRefEntry_obj > __this = new ModuleAnimationComponentRefEntry_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ModuleAnimationComponentRefEntry_obj > ModuleAnimationComponentRefEntry_obj::__alloc(hx::Ctx *_hx_ctx) {
	ModuleAnimationComponentRefEntry_obj *__this = (ModuleAnimationComponentRefEntry_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ModuleAnimationComponentRefEntry_obj), true, "haxe.ui.parsers.modules.ModuleAnimationComponentRefEntry"));
	*(void **)__this = ModuleAnimationComponentRefEntry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ModuleAnimationComponentRefEntry_obj::ModuleAnimationComponentRefEntry_obj()
{
}

void ModuleAnimationComponentRefEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ModuleAnimationComponentRefEntry);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(vars,"vars");
	HX_MARK_END_CLASS();
}

void ModuleAnimationComponentRefEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(vars,"vars");
}

hx::Val ModuleAnimationComponentRefEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { return hx::Val( vars ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ModuleAnimationComponentRefEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"vars") ) { vars=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ModuleAnimationComponentRefEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ModuleAnimationComponentRefEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ModuleAnimationComponentRefEntry_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ModuleAnimationComponentRefEntry_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ModuleAnimationComponentRefEntry_obj,vars),HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ModuleAnimationComponentRefEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String ModuleAnimationComponentRefEntry_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("vars","\xac","\x2b","\x49","\x4e"),
	::String(null()) };

static void ModuleAnimationComponentRefEntry_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ModuleAnimationComponentRefEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ModuleAnimationComponentRefEntry_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ModuleAnimationComponentRefEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ModuleAnimationComponentRefEntry_obj::__mClass;

void ModuleAnimationComponentRefEntry_obj::__register()
{
	hx::Object *dummy = new ModuleAnimationComponentRefEntry_obj;
	ModuleAnimationComponentRefEntry_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.ModuleAnimationComponentRefEntry","\x57","\xfc","\xc8","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ModuleAnimationComponentRefEntry_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ModuleAnimationComponentRefEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ModuleAnimationComponentRefEntry_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ModuleAnimationComponentRefEntry_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ModuleAnimationComponentRefEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ModuleAnimationComponentRefEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules
