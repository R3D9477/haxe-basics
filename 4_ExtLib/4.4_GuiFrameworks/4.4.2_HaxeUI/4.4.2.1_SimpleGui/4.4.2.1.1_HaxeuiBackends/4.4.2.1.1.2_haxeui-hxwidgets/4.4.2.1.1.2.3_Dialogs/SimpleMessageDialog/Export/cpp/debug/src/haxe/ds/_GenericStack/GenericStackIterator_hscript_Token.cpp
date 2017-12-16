// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3396964b6a70643e_45_new,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token","new",0xbf5d5a94,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.new","/usr/share/haxe/std/haxe/ds/GenericStack.hx",45,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_3396964b6a70643e_42_hasNext,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token","hasNext",0xccb359a1,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.hasNext","/usr/share/haxe/std/haxe/ds/GenericStack.hx",42,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_3396964b6a70643e_43_next,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token","next",0xb251e83f,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.next","/usr/share/haxe/std/haxe/ds/GenericStack.hx",43,0x427260fb)
namespace haxe{
namespace ds{
namespace _GenericStack{

void GenericStackIterator_hscript_Token_obj::__construct( ::haxe::ds::GenericCell_hscript_Token head){
            	HX_STACKFRAME(&_hx_pos_3396964b6a70643e_45_new)
HXDLIN(  45)		this->current = head;
            	}

Dynamic GenericStackIterator_hscript_Token_obj::__CreateEmpty() { return new GenericStackIterator_hscript_Token_obj; }

void *GenericStackIterator_hscript_Token_obj::_hx_vtable = 0;

Dynamic GenericStackIterator_hscript_Token_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > _hx_result = new GenericStackIterator_hscript_Token_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GenericStackIterator_hscript_Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e291ea4;
}

bool GenericStackIterator_hscript_Token_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_3396964b6a70643e_42_hasNext)
HXDLIN(  42)		return hx::IsNotNull( this->current );
            	}


 ::hscript::Token GenericStackIterator_hscript_Token_obj::next(){
            	HX_STACKFRAME(&_hx_pos_3396964b6a70643e_43_next)
HXDLIN(  43)		 ::hscript::Token result = this->current->elt;
HXDLIN(  43)		this->current = this->current->next;
HXDLIN(  43)		return result;
            	}



hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > GenericStackIterator_hscript_Token_obj::__new( ::haxe::ds::GenericCell_hscript_Token head) {
	hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > __this = new GenericStackIterator_hscript_Token_obj();
	__this->__construct(head);
	return __this;
}

hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > GenericStackIterator_hscript_Token_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ds::GenericCell_hscript_Token head) {
	GenericStackIterator_hscript_Token_obj *__this = (GenericStackIterator_hscript_Token_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GenericStackIterator_hscript_Token_obj), true, "haxe.ds._GenericStack.GenericStackIterator_hscript_Token"));
	*(void **)__this = GenericStackIterator_hscript_Token_obj::_hx_vtable;
	__this->__construct(head);
	return __this;
}

GenericStackIterator_hscript_Token_obj::GenericStackIterator_hscript_Token_obj()
{
}

void GenericStackIterator_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStackIterator_hscript_Token);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_END_CLASS();
}

void GenericStackIterator_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
}

hx::Val GenericStackIterator_hscript_Token_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GenericStackIterator_hscript_Token_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast<  ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStackIterator_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GenericStackIterator_hscript_Token_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::GenericCell_hscript_Token*/ ,(int)offsetof(GenericStackIterator_hscript_Token_obj,current),HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GenericStackIterator_hscript_Token_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericStackIterator_hscript_Token_obj_sMemberFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void GenericStackIterator_hscript_Token_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericStackIterator_hscript_Token_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GenericStackIterator_hscript_Token_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericStackIterator_hscript_Token_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericStackIterator_hscript_Token_obj::__mClass;

void GenericStackIterator_hscript_Token_obj::__register()
{
	hx::Object *dummy = new GenericStackIterator_hscript_Token_obj;
	GenericStackIterator_hscript_Token_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds._GenericStack.GenericStackIterator_hscript_Token","\xa2","\xc0","\xd7","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GenericStackIterator_hscript_Token_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GenericStackIterator_hscript_Token_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericStackIterator_hscript_Token_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GenericStackIterator_hscript_Token_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericStackIterator_hscript_Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericStackIterator_hscript_Token_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack
