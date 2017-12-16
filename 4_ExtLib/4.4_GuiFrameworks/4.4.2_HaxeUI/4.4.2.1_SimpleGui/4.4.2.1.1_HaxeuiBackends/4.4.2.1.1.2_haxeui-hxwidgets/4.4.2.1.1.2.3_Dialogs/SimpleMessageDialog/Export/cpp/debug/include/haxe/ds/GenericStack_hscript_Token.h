// GeneratedByHaxe
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#define INCLUDED_haxe_ds_GenericStack_hscript_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,GenericCell_hscript_Token)
HX_DECLARE_CLASS2(haxe,ds,GenericStack_hscript_Token)
HX_DECLARE_CLASS1(hscript,Token)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES GenericStack_hscript_Token_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GenericStack_hscript_Token_obj OBJ_;
		GenericStack_hscript_Token_obj();

	public:
		enum { _hx_ClassId = 0x15508f1c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.GenericStack_hscript_Token")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ds.GenericStack_hscript_Token"); }
		static hx::ObjectPtr< GenericStack_hscript_Token_obj > __new();
		static hx::ObjectPtr< GenericStack_hscript_Token_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericStack_hscript_Token_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GenericStack_hscript_Token","\x9f","\xf8","\xc5","\x67"); }

		 ::haxe::ds::GenericCell_hscript_Token head;
		void add( ::hscript::Token item);
		::Dynamic add_dyn();

		 ::hscript::Token first();
		::Dynamic first_dyn();

		 ::hscript::Token pop();
		::Dynamic pop_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		bool remove( ::hscript::Token v);
		::Dynamic remove_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_GenericStack_hscript_Token */ 
