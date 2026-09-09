class InstaStory:
    def share(self):
        print("Sharing an image story")


class WhatsAppStory(InstaStory):
    def share(self):
        print("Sharing a text status")


instagram_story = InstaStory()
whatsapp_story = WhatsAppStory()

instagram_story.share()
whatsapp_story.share()