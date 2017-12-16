// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#include <haxe/ds/GenericStack_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_91d79eb0f215d695_74_new,"haxe.ds.GenericStack_hscript_Token","new",0xda5f4ac8,"haxe.ds.GenericStack_hscript_Token.new","/usr/share/haxe/std/haxe/ds/GenericStack.hx",74,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_91d79eb0f215d695_81_add,"haxe.ds.GenericStack_hscript_Token","add",0xda556c89,"haxe.ds.GenericStack_hscript_Token.add","/usr/share/haxe/std/haxe/ds/GenericStack.hx",81,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_91d79eb0f215d695_90_first,"haxe.ds.GenericStack_hscript_Token","first",0x104a5c98,"haxe.ds.GenericStack_hscript_Token.first","/usr/share/haxe/std/haxe/ds/GenericStack.hx",90,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_91d79eb0f215d695_98_pop,"haxe.ds.GenericStack_hscript_Token","pop",0xda60d7f9,"haxe.ds.GenericStack_hscript_Token.pop","/usr/share/haxe/std/haxe/ds/GenericStack.hx",98,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_91d79eb0f215d695_112_isEmpty,"haxe.ds.GenericStack_hscript_Token","isEmpty",0x0c5cacab,"haxe.ds.GenericStack_hscript_Token.isEmpty","/usr/share/haxe/std/haxe/ds/GenericStack.hx",112,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_91d79eb0f215d695_124_remove,"haxe.ds.GenericStack_hscript_Token","remove",0xac2392dc,"haxe.ds.GenericStack_hscript_Token.remove","/usr/share/haxe/std/haxe/ds/GenericStack.hx",124,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_91d79eb0f215d695_147_iterator,"haxe.ds.GenericStack_hscript_Token","iterator",0x90d21686,"haxe.ds.GenericStack_hscript_Token.iterator","/usr/share/haxe/std/haxe/ds/GenericStack.hx",147,0x427260fb)
HX_LOCAL_STACK_FRAME(_hx_pos_91d79eb0f215d695_173_toString,"haxe.ds.GenericStack_hscript_Token","toString",0x35a69d44,"haxe.ds.GenericStack_hscript_Token.toString","/usr/share/haxe/std/haxe/ds/GenericStack.hx",173,0x427260fb)
namespace haxe{
namespace ds{

void GenericStack_hscript_Token_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_91d79eb0f215d695_74_new)
            	}

Dynamic GenericStack_hscript_Token_obj::__CreateEmpty() { return new GenericStack_hscript_Token_obj; }

void *GenericStack_hscript_Token_obj::_hx_vtable = 0;

Dynamic GenericStack_hscript_Token_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GenericStack_hscript_Token_obj > _hx_result = new GenericStack_hscript_Token_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GenericStack_hscript_Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15508f1c;
}

void GenericStack_hscript_Token_obj::add( ::hscript::Token item){
            	HX_GC_STACKFRAME(&_hx_pos_91d79eb0f215d695_81_add)
HXDLIN(  81)		this->head =  ::haxe::ds::GenericCell_hscript_Token_obj::__alloc( HX_CTX ,item,this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_hscript_Token_obj,add,(void))

 ::hscript::Token GenericStack_hscript_Token_obj::first(){
            	HX_STACKFRAME(&_hx_pos_91d79eb0f215d695_90_first)
HXDLIN(  90)		if (hx::IsNull( this->head )) {
HXDLIN(  90)			return null();
            		}
            		else {
HXDLIN(  90)			return this->head->elt;
            		}
HXDLIN(  90)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,first,return )

 ::hscript::Token GenericStack_hscript_Token_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_91d79eb0f215d695_98_pop)
HXLINE(  99)		 ::haxe::ds::GenericCell_hscript_Token k = this->head;
HXLINE( 100)		if (hx::IsNull( k )) {
HXLINE( 101)			return null();
            		}
            		else {
HXLINE( 103)			this->head = k->next;
HXLINE( 104)			return k->elt;
            		}
HXLINE( 100)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,pop,return )

bool GenericStack_hscript_Token_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_91d79eb0f215d695_112_isEmpty)
HXDLIN( 112)		return hx::IsNull( this->head );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,isEmpty,return )

bool GenericStack_hscript_Token_obj::remove( ::hscript::Token v){
            	HX_STACKFRAME(&_hx_pos_91d79eb0f215d695_124_remove)
HXLINE( 125)		 ::haxe::ds::GenericCell_hscript_Token prev = null();
HXLINE( 126)		 ::haxe::ds::GenericCell_hscript_Token l = this->head;
HXLINE( 127)		while(hx::IsNotNull( l )){
HXLINE( 128)			if (hx::IsEq( l->elt,v )) {
HXLINE( 129)				if (hx::IsNull( prev )) {
HXLINE( 130)					this->head = l->next;
            				}
            				else {
HXLINE( 132)					prev->next = l->next;
            				}
HXLINE( 133)				goto _hx_goto_5;
            			}
HXLINE( 135)			prev = l;
HXLINE( 136)			l = l->next;
            		}
            		_hx_goto_5:;
HXLINE( 138)		return hx::IsNotNull( l );
            	}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_hscript_Token_obj,remove,return )

 ::Dynamic GenericStack_hscript_Token_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_91d79eb0f215d695_147_iterator)
HXDLIN( 147)		return  ::haxe::ds::_GenericStack::GenericStackIterator_hscript_Token_obj::__alloc( HX_CTX ,this->head);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,iterator,return )

::String GenericStack_hscript_Token_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_91d79eb0f215d695_173_toString)
HXLINE( 174)		::Array< ::Dynamic> a = ::Array_obj< ::Dynamic>::__new();
HXLINE( 175)		 ::haxe::ds::GenericCell_hscript_Token l = this->head;
HXLINE( 176)		while(hx::IsNotNull( l )){
HXLINE( 177)			a->push(l->elt);
HXLINE( 178)			l = l->next;
            		}
HXLINE( 180)		return ((HX_("{",7b,00,00,00) + a->join(HX_(",",2c,00,00,00))) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,toString,return )


hx::ObjectPtr< GenericStack_hscript_Token_obj > GenericStack_hscript_Token_obj::__new() {
	hx::ObjectPtr< GenericStack_hscript_Token_obj > __this = new GenericStack_hscript_Token_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< GenericStack_hscript_Token_obj > GenericStack_hscript_Token_obj::__alloc(hx::Ctx *_hx_ctx) {
	GenericStack_hscript_Token_obj *__this = (GenericStack_hscript_Token_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GenericStack_hscript_Token_obj), true, "haxe.ds.GenericStack_hscript_Token"));
	*(void **)__this = GenericStack_hscript_Token_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GenericStack_hscript_Token_obj::GenericStack_hscript_Token_obj()
{
}

void GenericStack_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStack_hscript_Token);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void GenericStack_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
}

hx::Val GenericStack_hscript_Token_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return hx::Val( head ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return hx::Val( first_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return hx::Val( isEmpty_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GenericStack_hscript_Token_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast<  ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStack_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("head","\x20","\x29","\x0b","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GenericStack_hscript_Token_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::GenericCell_hscript_Token*/ ,(int)offsetof(GenericStack_hscript_Token_obj,head),HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GenericStack_hscript_Token_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericStack_hscript_Token_obj_sMemberFields[] = {
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void GenericStack_hscript_Token_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericStack_hscript_Token_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GenericStack_hscript_Token_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericStack_hscript_Token_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericStack_hscript_Token_obj::__mClass;

void GenericStack_hscript_Token_obj::__register()
{
	hx::Object *dummy = new GenericStack_hscript_Token_obj;
	GenericStack_hscript_Token_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.GenericStack_hscript_Token","\xd6","\x86","\x28","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GenericStack_hscript_Token_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GenericStack_hscript_Token_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericStack_hscript_Token_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GenericStack_hscript_Token_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericStack_hscript_Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericStack_hscript_Token_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
