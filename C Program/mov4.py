# import ffmpeg

# input_file = 'Untitled.MOV'
# output_file = 'final.mp4'

# ffmpeg.input(input_file).output(output_file, codec='copy').run()
import ffmpeg

input_file = 'final.mp4'
output_file = 'finalcompressed.mp4'

ffmpeg.input(input_file).output(output_file, crf=23, preset='medium', movflags='faststart').run()
