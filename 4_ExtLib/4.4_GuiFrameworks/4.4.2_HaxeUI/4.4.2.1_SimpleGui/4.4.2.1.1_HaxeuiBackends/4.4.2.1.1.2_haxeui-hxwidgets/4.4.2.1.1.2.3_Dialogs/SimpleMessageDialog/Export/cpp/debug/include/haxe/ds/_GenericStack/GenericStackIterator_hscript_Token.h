// GeneratedByHaxe
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#define INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cpp_FastIterator
#include <cpp/FastIterator.h>
#endif
HX_DECLARE_CLASS2(haxe,ds,GenericCell_hscript_Token)
HX_DECLARE_CLASS3(haxe,ds,_GenericStack,GenericStackIterator_hscript_Token)
HX_DECLARE_CLASS1(hscript,Token)

namespace haxe{
namespace ds{
namespace _GenericStack{


class HXCPP_CLASS_ATTRIBUTES GenericStackIterator_hscript_Token_obj : public ::cpp::FastIterator_obj<  ::hscript::Token >
{
	public:
		typedef ::cpp::FastIterator_obj<  ::hscript::Token > super;
		typedef GenericStackIterator_hscript_Token_obj OBJ_;
		GenericStackIterator_hscript_Token_obj();

	public:
		enum { _hx_ClassId = 0x0e291ea4 };

		void __construct( ::haxe::ds::GenericCell_hscript_Token head);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds._GenericStack.GenericStackIterator_hscript_Token")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token"); }
		static hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > __new( ::haxe::ds::GenericCell_hscript_Token head);
		static hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ds::GenericCell_hscript_Token head);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericStackIterator_hscript_Token_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GenericStackIterator_hscript_Token","\x2d","\xb4","\xe0","\x4d"); }

		 ::haxe::ds::GenericCell_hscript_Token current;
		bool hasNext();

		 ::hscript::Token next();

};

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack

#endif /* INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token */ 
