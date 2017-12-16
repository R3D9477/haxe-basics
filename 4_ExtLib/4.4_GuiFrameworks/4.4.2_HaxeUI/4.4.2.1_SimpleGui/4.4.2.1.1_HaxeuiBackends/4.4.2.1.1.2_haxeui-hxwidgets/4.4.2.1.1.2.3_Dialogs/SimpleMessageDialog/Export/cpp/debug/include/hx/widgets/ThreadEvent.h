// GeneratedByHaxe
#ifndef INCLUDED_hx_widgets_ThreadEvent
#define INCLUDED_hx_widgets_ThreadEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,ThreadEvent)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES ThreadEvent_obj : public  ::hx::widgets::Event_obj
{
	public:
		typedef  ::hx::widgets::Event_obj super;
		typedef ThreadEvent_obj OBJ_;
		ThreadEvent_obj();

	public:
		enum { _hx_ClassId = 0x42282a51 };

		void __construct(hx::Null< int >  __o_eventType,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.ThreadEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"hx.widgets.ThreadEvent"); }
		static hx::ObjectPtr< ThreadEvent_obj > __new(hx::Null< int >  __o_eventType,hx::Null< int >  __o_id);
		static hx::ObjectPtr< ThreadEvent_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_eventType,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThreadEvent_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ThreadEvent","\xd0","\xf8","\xe7","\xad"); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_ThreadEvent */ 
