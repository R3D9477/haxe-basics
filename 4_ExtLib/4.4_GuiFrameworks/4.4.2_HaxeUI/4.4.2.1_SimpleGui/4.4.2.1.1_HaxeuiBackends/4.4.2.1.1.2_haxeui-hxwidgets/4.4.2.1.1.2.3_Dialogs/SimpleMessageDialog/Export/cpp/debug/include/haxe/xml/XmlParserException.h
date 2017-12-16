// GeneratedByHaxe
#ifndef INCLUDED_haxe_xml_XmlParserException
#define INCLUDED_haxe_xml_XmlParserException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,xml,XmlParserException)

namespace haxe{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES XmlParserException_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef XmlParserException_obj OBJ_;
		XmlParserException_obj();

	public:
		enum { _hx_ClassId = 0x1fc2c25a };

		void __construct(::String message,::String xml,int position);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.xml.XmlParserException")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.xml.XmlParserException"); }
		static hx::ObjectPtr< XmlParserException_obj > __new(::String message,::String xml,int position);
		static hx::ObjectPtr< XmlParserException_obj > __alloc(hx::Ctx *_hx_ctx,::String message,::String xml,int position);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XmlParserException_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("XmlParserException","\x79","\x27","\xd7","\x6b"); }

		::String message;
		int lineNumber;
		int positionAtLine;
		int position;
		::String xml;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_XmlParserException */ 
