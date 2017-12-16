// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8afd6788e4248bdd_7_new,"haxe.ui.parsers.ui.resolvers.ResourceResolver","new",0x35221db5,"haxe.ui.parsers.ui.resolvers.ResourceResolver.new","haxe/ui/parsers/ui/resolvers/ResourceResolver.hx",7,0x4d95affa)
HX_LOCAL_STACK_FRAME(_hx_pos_8afd6788e4248bdd_11_getResourceData,"haxe.ui.parsers.ui.resolvers.ResourceResolver","getResourceData",0xed282ca3,"haxe.ui.parsers.ui.resolvers.ResourceResolver.getResourceData","haxe/ui/parsers/ui/resolvers/ResourceResolver.hx",11,0x4d95affa)
HX_LOCAL_STACK_FRAME(_hx_pos_8afd6788e4248bdd_14_extension,"haxe.ui.parsers.ui.resolvers.ResourceResolver","extension",0x6bb70e94,"haxe.ui.parsers.ui.resolvers.ResourceResolver.extension","haxe/ui/parsers/ui/resolvers/ResourceResolver.hx",14,0x4d95affa)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{
namespace resolvers{

void ResourceResolver_obj::__construct( ::haxe::ds::StringMap params){
            	HX_STACKFRAME(&_hx_pos_8afd6788e4248bdd_7_new)
HXDLIN(   7)		this->_params = params;
            	}

Dynamic ResourceResolver_obj::__CreateEmpty() { return new ResourceResolver_obj; }

void *ResourceResolver_obj::_hx_vtable = 0;

Dynamic ResourceResolver_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ResourceResolver_obj > _hx_result = new ResourceResolver_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResourceResolver_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x602d5b7b;
}

::String ResourceResolver_obj::getResourceData(::String r){
            	HX_STACKFRAME(&_hx_pos_8afd6788e4248bdd_11_getResourceData)
HXDLIN(  11)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ResourceResolver_obj,getResourceData,return )

::String ResourceResolver_obj::extension(::String path){
            	HX_STACKFRAME(&_hx_pos_8afd6788e4248bdd_14_extension)
HXLINE(  15)		if ((path.indexOf(HX_(".",2e,00,00,00),null()) == (int)-1)) {
HXLINE(  16)			return null();
            		}
HXLINE(  18)		::Array< ::String > arr = path.split(HX_(".",2e,00,00,00));
HXLINE(  19)		::String extension = arr->__get((arr->length - (int)1));
HXLINE(  20)		return extension;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ResourceResolver_obj,extension,return )


hx::ObjectPtr< ResourceResolver_obj > ResourceResolver_obj::__new( ::haxe::ds::StringMap params) {
	hx::ObjectPtr< ResourceResolver_obj > __this = new ResourceResolver_obj();
	__this->__construct(params);
	return __this;
}

hx::ObjectPtr< ResourceResolver_obj > ResourceResolver_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ds::StringMap params) {
	ResourceResolver_obj *__this = (ResourceResolver_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ResourceResolver_obj), true, "haxe.ui.parsers.ui.resolvers.ResourceResolver"));
	*(void **)__this = ResourceResolver_obj::_hx_vtable;
	__this->__construct(params);
	return __this;
}

ResourceResolver_obj::ResourceResolver_obj()
{
}

void ResourceResolver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResourceResolver);
	HX_MARK_MEMBER_NAME(_params,"_params");
	HX_MARK_END_CLASS();
}

void ResourceResolver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_params,"_params");
}

hx::Val ResourceResolver_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_params") ) { return hx::Val( _params ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extension") ) { return hx::Val( extension_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getResourceData") ) { return hx::Val( getResourceData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ResourceResolver_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_params") ) { _params=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResourceResolver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_params","\xe5","\x0c","\xf2","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ResourceResolver_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ResourceResolver_obj,_params),HX_HCSTRING("_params","\xe5","\x0c","\xf2","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ResourceResolver_obj_sStaticStorageInfo = 0;
#endif

static ::String ResourceResolver_obj_sMemberFields[] = {
	HX_HCSTRING("_params","\xe5","\x0c","\xf2","\x5b"),
	HX_HCSTRING("getResourceData","\xce","\xb3","\xb0","\xac"),
	HX_HCSTRING("extension","\x7f","\x93","\x10","\xe5"),
	::String(null()) };

static void ResourceResolver_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceResolver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ResourceResolver_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceResolver_obj::__mClass,"__mClass");
};

#endif

hx::Class ResourceResolver_obj::__mClass;

void ResourceResolver_obj::__register()
{
	hx::Object *dummy = new ResourceResolver_obj;
	ResourceResolver_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.resolvers.ResourceResolver","\x43","\x1f","\x92","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ResourceResolver_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ResourceResolver_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ResourceResolver_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ResourceResolver_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResourceResolver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResourceResolver_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
} // end namespace resolvers
