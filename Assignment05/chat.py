from nltk.chat.util import Chat, reflections

pairs = [
    ['(hi|hello|hey|holla|hola)', ['Hey there !', 'Hi there !', 'Hey !']],
    ['(.*) your name ?', ['My name is Amazebot']],
    ['(.*) do you do ?',
     ['We provide a platform for tech enthusiasts, a wide range of options !']],
    ['(.*) how are you ?', ["I'm doing great. How about You ?"]],
    ['sorry (.*)', ['Its alright","Its OK, never mind']],
    ['I am fine', ['Great to hear that, How can I help you?']],
    ['I (.*) good', ['Nice to hear that', 'How can I help you?:)']],
    ['(.*) age?', ['I am a computer program dude Seriously you are asking me this?']],
    ['what (.*) want ?', ['Make me an offer I cannot refuse']],
    ['(.*) created ?', ['Rohit created me using Python NLTK library ', 'top secret ;)']],
    ['(.*) (location|city) ?', ['Pune, Maharashtra']],
    ['how is weather in (.*)?', ['Weather in %1 is awesome like always',
                                 'Too hot man here in %1', 'Too cold man here in %1', 'Never even heard about %1']],
    ['i work in (.*)?', ['%1 is an Amazing company',
                         'I have heard about it. But they are in huge loss these days.']],
    ['(.*)raining in (.*)', ['No rain since last week here in %2',
                             'Damn its raining too much here in %2']],
    ['how (.*) health(.*)', ['I am a computer program, so I am always healthy ']],
    ['(.*) (sportz|game) ?',
     ['I am a very big fan of Cricket', 'I like watching football']],
    ['who (.*) sportsperson ?', ['Rohit Sharma', 'Virat Kohli',
                                 'MS Dhoni', 'Lionel Messi', 'Christiano Ronaldo']],
    ['who (.*) (moviestar|actor)?', ['Shah Rukh Khan']],
    ['quit', ['Thank you for using our services']]
]
chat = Chat(pairs, reflections)
chat.converse()


# import random

# # Define the chatbot responses
# greetings = ['Hello!', 'Hi!', 'Hey there!', 'Greetings!', 'Nice to see you!']
# goodbyes = ['Goodbye!', 'See you later!', 'Farewell!', 'Bye!', 'Take care!']
# help_responses = ['How may I assist you?', 'What can I do for you?', 'How can I help?']
# problem_responses = ['I\'m sorry to hear that. Can you please tell me more about the problem?', 'Let me see if I can help. What seems to be the issue?', 'I\'ll do my best to help you. What\'s the problem?']
# thankyou_responses = ['You are welcome!', 'No problem!', 'It was my pleasure!', 'Glad to help!']

# # Define the chatbot function
# def chatbot():
#     print('Chatbot: ' + random.choice(greetings))
#     while True:
#         user_input = input('User: ')
#         if 'hello' in user_input.lower() or 'hi' in user_input.lower() or 'hey' in user_input.lower():
#             print('Chatbot: ' + random.choice(greetings))
#         elif 'bye' in user_input.lower() or 'goodbye' in user_input.lower() or 'see you' in user_input.lower():
#             print('Chatbot: ' + random.choice(goodbyes))
#             break
#         elif 'help' in user_input.lower() or 'support' in user_input.lower():
#             print('Chatbot: ' + random.choice(help_responses))
#         elif 'problem' in user_input.lower() or 'issue' in user_input.lower() or 'error' in user_input.lower():
#             print('Chatbot: ' + random.choice(problem_responses))
#         elif 'thank you' in user_input.lower() or 'thanks' in user_input.lower() or 'thankyou' in user_input.lower():
#             print('Chatbot: ' + random.choice(thankyou_responses))
#         else:
#             print('Chatbot: I\'m sorry, I don\'t understand. Can you please rephrase your request?')

# # Test the chatbot
# chatbot()
