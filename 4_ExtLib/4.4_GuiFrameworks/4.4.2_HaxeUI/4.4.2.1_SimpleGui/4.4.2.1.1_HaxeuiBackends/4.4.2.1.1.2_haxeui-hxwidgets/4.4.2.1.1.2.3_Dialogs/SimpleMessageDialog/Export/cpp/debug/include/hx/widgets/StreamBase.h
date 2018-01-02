// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_StreamBase
#define INCLUDED_hx_widgets_StreamBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_28808df3b1edae5b
#define INCLUDED_28808df3b1edae5b
#include "wx/stream.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,StreamBase)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES StreamBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StreamBase_obj OBJ_;
		StreamBase_obj();

	public:
		enum { _hx_ClassId = 0x3c6dbea8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.StreamBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.StreamBase"); }

		hx::ObjectPtr< StreamBase_obj > __new() {
			hx::ObjectPtr< StreamBase_obj > __this = new StreamBase_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StreamBase_obj > __alloc(hx::Ctx *_hx_ctx) {
			StreamBase_obj *__this = (StreamBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StreamBase_obj), true, "hx.widgets.StreamBase"));
			*(void **)__this = StreamBase_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StreamBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StreamBase","\xd1","\x6c","\x2c","\x85"); }

		::cpp::Pointer<  wxStreamBase > _ref;
};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_StreamBase */ 
