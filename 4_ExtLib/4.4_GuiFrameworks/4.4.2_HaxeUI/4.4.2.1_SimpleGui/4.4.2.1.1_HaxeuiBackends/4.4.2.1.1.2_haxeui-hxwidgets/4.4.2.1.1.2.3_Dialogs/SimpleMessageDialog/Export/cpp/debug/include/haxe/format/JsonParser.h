// GeneratedByHaxe
#ifndef INCLUDED_haxe_format_JsonParser
#define INCLUDED_haxe_format_JsonParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,format,JsonParser)

namespace haxe{
namespace format{


class HXCPP_CLASS_ATTRIBUTES JsonParser_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef JsonParser_obj OBJ_;
		JsonParser_obj();

	public:
		enum { _hx_ClassId = 0x5b04dba4 };

		void __construct(::String str);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.format.JsonParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.format.JsonParser"); }
		static hx::ObjectPtr< JsonParser_obj > __new(::String str);
		static hx::ObjectPtr< JsonParser_obj > __alloc(hx::Ctx *_hx_ctx,::String str);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JsonParser_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JsonParser","\x47","\x65","\x2e","\x25"); }

		::String str;
		int pos;
		 ::Dynamic parseRec();
		::Dynamic parseRec_dyn();

		::String parseString();
		::Dynamic parseString_dyn();

		void invalidChar();
		::Dynamic invalidChar_dyn();

		void invalidNumber(int start);
		::Dynamic invalidNumber_dyn();

};

} // end namespace haxe
} // end namespace format

#endif /* INCLUDED_haxe_format_JsonParser */ 
