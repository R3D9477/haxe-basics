// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ClassFactory
#include <haxe/ui/core/ClassFactory.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2474a147ce386b10_9_new,"haxe.ui.core.ClassFactory","new",0x19dc0d21,"haxe.ui.core.ClassFactory.new","haxe/ui/core/ClassFactory.hx",9,0x427c212e)
HX_LOCAL_STACK_FRAME(_hx_pos_2474a147ce386b10_14_newInstance,"haxe.ui.core.ClassFactory","newInstance",0xfce271d6,"haxe.ui.core.ClassFactory.newInstance","haxe/ui/core/ClassFactory.hx",14,0x427c212e)
namespace haxe{
namespace ui{
namespace core{

void ClassFactory_obj::__construct(hx::Class generator, ::haxe::ds::StringMap properties){
            	HX_STACKFRAME(&_hx_pos_2474a147ce386b10_9_new)
HXLINE(  10)		this->generator = generator;
HXLINE(  11)		this->properties = properties;
            	}

Dynamic ClassFactory_obj::__CreateEmpty() { return new ClassFactory_obj; }

void *ClassFactory_obj::_hx_vtable = 0;

Dynamic ClassFactory_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ClassFactory_obj > _hx_result = new ClassFactory_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ClassFactory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b5468b3;
}

 ::Dynamic ClassFactory_obj::newInstance(){
            	HX_STACKFRAME(&_hx_pos_2474a147ce386b10_14_newInstance)
HXLINE(  15)		 ::Dynamic instance = ::Type_obj::createInstance(this->generator,::cpp::VirtualArray_obj::__new(0));
HXLINE(  17)		if (hx::IsNotNull( this->properties )) {
HXLINE(  18)			 ::Dynamic property = this->properties->keys();
HXDLIN(  18)			while(( (bool)(property->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  18)				::String property1 = ( (::String)(property->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  19)				::Reflect_obj::setProperty(instance,property1,this->properties->get(property1));
            			}
            		}
HXLINE(  23)		return instance;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassFactory_obj,newInstance,return )


hx::ObjectPtr< ClassFactory_obj > ClassFactory_obj::__new(hx::Class generator, ::haxe::ds::StringMap properties) {
	hx::ObjectPtr< ClassFactory_obj > __this = new ClassFactory_obj();
	__this->__construct(generator,properties);
	return __this;
}

hx::ObjectPtr< ClassFactory_obj > ClassFactory_obj::__alloc(hx::Ctx *_hx_ctx,hx::Class generator, ::haxe::ds::StringMap properties) {
	ClassFactory_obj *__this = (ClassFactory_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ClassFactory_obj), true, "haxe.ui.core.ClassFactory"));
	*(void **)__this = ClassFactory_obj::_hx_vtable;
	__this->__construct(generator,properties);
	return __this;
}

ClassFactory_obj::ClassFactory_obj()
{
}

void ClassFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassFactory);
	HX_MARK_MEMBER_NAME(generator,"generator");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void ClassFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(generator,"generator");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

hx::Val ClassFactory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"generator") ) { return hx::Val( generator ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"newInstance") ) { return hx::Val( newInstance_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ClassFactory_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"generator") ) { generator=inValue.Cast< hx::Class >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassFactory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("generator","\x53","\xf8","\x70","\x94"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ClassFactory_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(ClassFactory_obj,generator),HX_HCSTRING("generator","\x53","\xf8","\x70","\x94")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ClassFactory_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ClassFactory_obj_sStaticStorageInfo = 0;
#endif

static ::String ClassFactory_obj_sMemberFields[] = {
	HX_HCSTRING("generator","\x53","\xf8","\x70","\x94"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("newInstance","\x15","\x0c","\xbe","\x7e"),
	::String(null()) };

static void ClassFactory_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClassFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClassFactory_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClassFactory_obj::__mClass,"__mClass");
};

#endif

hx::Class ClassFactory_obj::__mClass;

void ClassFactory_obj::__register()
{
	hx::Object *dummy = new ClassFactory_obj;
	ClassFactory_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.core.ClassFactory","\xaf","\xe8","\x6c","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ClassFactory_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ClassFactory_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClassFactory_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClassFactory_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClassFactory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClassFactory_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
